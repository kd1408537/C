#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Skil_num 4
#define Mob_num 3

typedef unsigned int Uint;

typedef struct{
	char name[20]; //skill name
	int type; //skill type 
	int use_mp; //mp
	int effect; //skill effect
}Skill;
typedef struct { //spec　struct
	char name[20];
	int hp;
	int atk;
	int def;
	Uint state;
}Spec;
typedef struct { //chara struct
	Spec sp;
	int maxhp;
	int mp;
	Skill skl[Skil_num];
}Chara;
typedef struct {  //Mob型構造体
	Spec sp;
	int rate; //状態異常攻撃発生レート%表記
}Mob;
enum bitstate
{
	base = 0,
	poison = 1 << 0,
	sleep = 1 << 1,
	paralysis = 1 << 2,
	burn = 1 << 3,
	atkup = 1 << 4,
	atkdown = 1 << 5,
	Dead=1<<6,  //dead flag
	Atk_Skill=1<<7, //このフラグがonのキャラしか異常状態を付加できない
	DefUP=1<<8
};

int turncount = 0;　//ターン(偶数：自キャラ攻撃ターン、奇数：敵キャラ攻撃ターン)

//typedef unsigned int UINT;
//void DisplayStatus(UINT s);
//void changeflag(UINT* s);
//void clearflag(UINT* s);
void DisplayStatus(Chara c);

//戦闘モードを移行する
void BattleMode(Chara* c, Mob m);
//戦闘時のメニュー表示
int DisplayMenu(void);
//スキル使用時のメニュー
int SkillMenu(Chara c);
//攻撃側と防御側のバラメータを使った攻撃ダメージ計算
int DamageCalc(Spec sp1, Spec sp2);
//hp計算と死亡判定
void BattleMessage(Spec sp1, Spec* sp2);

main(int argc, char *argv[])
{
	srand(time(0));
	//           name     hp  atk   def state maxhp mp
	Chara chara = { "主人公",2000,200,100,base,2000,150 ,
		// sk.name type usemp effect
		{{"hp回復",0,50,800},
		 {"攻撃力アップ",1,50,120},
		 {"状態異常回復",2,20,0},
		{"防御力アップ",3,40,150} } };
	Mob mob[Mob_num] = {
		//name hp atk def state             rate%
		{"敵a",700,150,800,poison | Atk_Skill,30},
		{ "敵b",1500,200,200,burn | Atk_Skill,30 },
		{ "ボス",5000,200,80,atkdown | Atk_Skill,10 } };

	//乱数で0~mob_num-1の数値を求める
	int num = rand() % Mob_num;
	//実行時にコマンドライン引数があった
	if(argc > 1) {
		//引数を数値に変換
		num = atoi(argv[1]);
		//引数の数値が0~MOB_NUM-1の範囲になければ
		if (num < 0 || num >= Mob_num)
		{
			num = rand() % Mob_num;
		}
	}
	//戦闘モードを開始
	BattleMode(&chara, mob[num]);
	if(chara.sp.state & Dead) {
		printf("%sの死亡によりゲームオーバー\n", chara.sp.name);
	}
}
	
	
	/*UINT MyState = base;
	DisplayStatus(MyState);
	changeflag(&MyState);
	DisplayStatus(MyState);
	clearflag(&MyState);
	DisplayStatus(MyState);*/

int DamageCalc(Spec sp1, Spec sp2)
{
	int damage;
	//攻撃力ダウンフラグがonで，atkskillがoffのとき（自キャラのみこの条件に該当するこ該当）
	if ((sp1.state & atkdown) && !(sp1.state & Atk_Skill))
	{
		sp1.atk *= 0.8;
	}
	damage = sp1.atk * ((float)sp1.atk / sp2.def)
		+ sp1.atk * (rand() % 50) / 100.0;

	if (rand() % 100 == 99)
	{
		return 2 * damage;
	}
	return damage;
}

void BattleMessage(Spec sp1, Spec* sp2)
{
	int damage;
	turncount++;
	printf("%sの攻撃\n", sp1.name);
	damage = DamageCalc(sp1, *sp2);
	printf(" % sに % dのダメージ\n", sp2->name,damage);
	sp2->hp -= damage;
	if (sp2->hp <= 0)
	{
		printf("%sは倒れた\n",sp2->name);
		sp2->state |= Dead;
	}
}

void BattleMode(Chara* c, Mob m)
{
	int command, skill;
	system("cls");
	DisplayStatus(*c);
	printf("%sがあらわれた！\n", m.sp.name);
	while (1)
	{
		command = DisplayMenu();
		if (c->sp.state & poison)
		{
			c->sp.hp *= 0.8;
		}
		if (c->sp.state & burn)
		{
			c->sp.hp *= 0.9;
			c->mp *= 0.9;
		}
		if (command == 1)
		{
			DisplayStatus(*c);
			if (turncount % 2 == 0)
			{
				BattleMessage(c->sp, &m.sp);
				if (m.sp.state & Dead)
				{
					break;
				}
			}
			if (turncount % 2 == 1)
			{
				BattleMessage(m.sp, &c->sp);
				if (c->sp.state & Dead)
				{
					break;
				}
				else
				{
					if (rand() % 100 < m.rate)
					{
						printf("状態異常攻撃を受けた\n");
						c->sp.state |= (m.sp.state & ~Atk_Skill);
					}
					DisplayStatus(*c);
				}
			}
		}
		else if (command == -1)
		{
			c->sp.state |= Dead;
			return;
		}
		else if (command == 2)
		{
			printf("スキルの選択\n");
			skill = SkillMenu(*c);
			if (c->mp >= c->skl[skill].use_mp)
			{
				switch (skill)
				{
				case 0:
					c->sp.hp += c->skl[skill].effect;
					if (c->sp.hp > c->maxhp)
					{
						c->sp.hp = c->maxhp;
					}
					c->mp -= c->skl[skill].use_mp;
					printf("HPを%d回復した\n", c->skl[skill].effect);
					DisplayStatus(*c);
					break;
				case 1:
					c->sp.atk *= c->skl[skill].effect / 100.0;
					c->mp -= c->skl[skill].use_mp;
					c->sp.state |= atkup;
					printf("攻撃力アップ\n");
					DisplayStatus(*c);
					break;
				case 2:
					if (c->sp.state & atkup)
					{
						c->sp.state = base;
						c->sp.state |= atkup;
					}
					else
					{
						c->sp.state = base;
					}
					c->mp -= c->skl[skill].use_mp;
					printf("状態異常が回復した\n");
					DisplayStatus(*c);
					break;
				case 3://防御力アップの処理
					//自キャラのdefを1.5倍にする
					c->sp.def *= c->skl[skill].effect / 100.0;
					//自キャラのdefフラグを立てる
					c->sp.state |= DefUP;
					//自キャラのmpを使用した分減らす
					c->mp -= c->skl[skill].use_mp;
					//メッセージで防御力アップしたことを表示
					printf("防御力アップがした\n");
					//自キャラのステータスを表示
					DisplayStatus(*c);
					break;
				default:
					break;
				}
			}
			else
			{
				printf("mpが足りない！\n");
			}
		}

	}
}

	

//void DisplayStatus(UINT s)
//{
//	printf("現在の状態----");
//	if (s & poison)
//	{
//		printf("毒");
//	}
//	if (s & sleep)
//	{
//		printf("睡眠");
//	}
//	if (s & paralysis)
//	{
//		printf("麻痺");
//	}
//	if (s & burn)
//	{
//		printf("火傷");
//	}
//	if (s & atkup)
//	{
//		printf("攻撃up");
//	}
//	if (s & atkdown)
//	{
//		printf("攻撃down");
//	}
//	if (s & base)
//	{
//		printf("通常");
//	}
//	printf("\n*******************\n");
//
//}

//void changeflag(UINT* s)
//{
//	int a;
//	while (1)
//	{
//		printf("どの状態？\n");
//		printf("1.毒2.睡眠3.麻痺4.火傷5.攻撃up6.攻撃down0.終了\n");
//		scanf("%d", &a);
//		if (a == 0)
//		{
//			break;
//		}
//		switch (a)
//		{
//		case 1:
//			*s |= poison;
//			break;
//		case 2:
//			*s |= sleep;
//			break;
//		case 3:
//			*s |= paralysis;
//			break;
//		case 4:
//			*s |= burn;
//			break;
//		case 5:
//			*s |= atkup;
//			break;
//		case 6:
//			*s |= atkdown;
//			break;
//		default:
//			break;
//		}
//	}
//}
//
//void clearflag(UINT* s)
//{
//	int a;
//	while (1)
//	{
//		printf("どの状態を解除しますか\n");
//		printf("1.毒2.睡眠3.麻痺4.火傷5.攻撃up6.攻撃down0.終了");
//		scanf("%d", &a);
//		if (a == 0)
//		{
//			break;
//		}
//		switch (a)
//		{
//		case 1:
//			*s &= ~poison;
//			break;
//		case 2:
//			*s &= ~sleep;
//			break;
//		case 3:
//			*s &= ~paralysis;
//			break;
//		case 4:
//			*s &= ~burn;
//			break;
//		case 5:
//			*s &= ~atkup;
//			break;
//		case 6:
//			*s &= ~atkdown;
//			break;
//
//		default:
//			break;
//		}
//	}
//}

int  DisplayMenu(void)
{
	char ch;
	while (1)
	{
		printf("---------\nコマンドを選択\n");
		printf("1.たたかう\n2.スキル\n3.防御\n\n");
		ch = getch();
		if (ch > '0' && ch < '4')
		{
			return ch - '0';
		}
		else if(ch=='q')
		{
			return -1;
		}
		
		
	}
}

int SkillMenu(Chara c)
{
	int i,ch;
	while (1)
	{
		printf("----------\nスキルを選択\n");
		for (i = 0; i < Skil_num; i++)
		{
			printf("%d.%s\n", i + 1, c.skl[i].name);
		}
		printf("\n");
		ch = getch()-'0';
		if (ch > 0 && ch <=Skil_num)
		{
			return ch - 1;
		}
	}
}

void DisplayStatus(Chara c)
{
	printf("********************\n");
	printf("HP:%-4d  MP:%-3d\n", c.sp.hp, c.mp);

	if (c.sp.state)
	{
		printf("状態: ");
		if (c.sp.state & poison) { printf("毒"); }
		if (c.sp.state & sleep) { printf("睡眠"); }
		if (c.sp.state & paralysis) { printf("麻痺"); }
		if (c.sp.state & burn) { printf("火傷"); }
		if (c.sp.state & atkup) { printf("攻撃力アップ"); }
		if (c.sp.state & atkdown) { printf("攻撃力ダウン"); }
		if (c.sp.state & DefUP) { printf("防御力アップ"); }
	}
	printf("\n********************\n");
}