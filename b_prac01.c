#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Skil_num 3
#define Mob_num 3

typedef unsigned int Uint;

typedef struct{
	char name[20]; //skill name
	int type; //skill type 
	int use_mp; //mp
	int effect; //skill effect
}Skill;
typedef struct {
	char name[20];
	int hp;
	int atk;
	int def;
	Uint state;
}Spec;
typedef struct {
	Spec sp;
	int maxhp;
	int mp;
	Skill skl[Skil_num];
}Chara;
typedef struct {
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
	Atk_Skill=1<<7 //このフラグがonのキャラしか異常状態を付加できない
};

int turncount = 0;

typedef unsigned int UINT;
void displaystatus(UINT s);
void changeflag(UINT* s);
void clearflag(UINT* s);
void Displaystatus(UINT* s);

//戦闘モードを移行する
void BattleMode(Chara* c, Mob m);
//戦闘時のメニュー表示
int DisplayMenu(void);
//スキル使用時のメニュー
int SkillMenu(Chara c);
//攻撃側と防御側のバラメータを使った攻撃ダメージ計算
int DamageCalc(Spec sp1, Spec sp2);
//hp計算と死亡判定
void BattlemESSAGE(Spec sp1, Spec* sp2);

main(int argc, char *argv[])
{
	srand(time(0));
	//           name     hp  atk   def state maxhp mp
	Chara chara = { "主人公",2000,200,100,Base,2000,150 ,
		// sk.name type usemp effect
		{{"hp回復",0,50,800},
		 {"攻撃力アップ",1,50,120},
		 {"状態異常回復",2,20,0}} };
	Mob mob[Mob_Num] = {
		//name hp atk def state             rate%
		{"敵a",700,150,800,poison | Atk_Skill,30}
		{ "敵b",1500,200,200,burn | Atk_Skill,30 }
		{ "ボス",5000,200,80,atkdown | Atk_Skill,10 } };

	//乱数で0~mob_num-1の数値を求める
	int num = rand() % Mob_num;
	//実行時にコマンドライン引数があった
	if(arg > 1) {
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
	
	
	UINT MyState = base;
	displaystatus(MyState);
	changeflag(&MyState);
	displaystatus(MyState);
	clearflag(&MyState);
	displaystatus(MyState);
}
void displaystatus(UINT s)
{
	printf("現在の状態----");
	if (s & poison)
	{
		printf("毒");
	}
	if (s & sleep)
	{
		printf("睡眠");
	}
	if (s & paralysis)
	{
		printf("麻痺");
	}
	if (s & burn)
	{
		printf("火傷");
	}
	if (s & atkup)
	{
		printf("攻撃up");
	}
	if (s & atkdown)
	{
		printf("攻撃down");
	}
	if (s & base)
	{
		printf("通常");
	}
	printf("\n*******************\n");

}

void changeflag(UINT* s)
{
	int a;
	while (1)
	{
		printf("どの状態？\n");
		printf("1.毒2.睡眠3.麻痺4.火傷5.攻撃up6.攻撃down0.終了\n");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= poison;
			break;
		case 2:
			*s |= sleep;
			break;
		case 3:
			*s |= paralysis;
			break;
		case 4:
			*s |= burn;
			break;
		case 5:
			*s |= atkup;
			break;
		case 6:
			*s |= atkdown;
			break;
		default:
			break;
		}
	}
}

void clearflag(UINT* s)
{
	int a;
	while (1)
	{
		printf("どの状態を解除しますか\n");
		printf("1.毒2.睡眠3.麻痺4.火傷5.攻撃up6.攻撃down0.終了");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s &= ~poison;
			break;
		case 2:
			*s &= ~sleep;
			break;
		case 3:
			*s &= ~paralysis;
			break;
		case 4:
			*s &= ~burn;
			break;
		case 5:
			*s &= ~atkup;
			break;
		case 6:
			*s &= ~atkdown;
			break;

		default:
			break;
		}
	}
}
