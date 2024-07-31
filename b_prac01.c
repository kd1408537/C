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
typedef struct { //spec�@struct
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
typedef struct {  //Mob�^�\����
	Spec sp;
	int rate; //��Ԉُ�U���������[�g%�\�L
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
	Atk_Skill=1<<7, //���̃t���O��on�̃L���������ُ��Ԃ�t���ł��Ȃ�
	DefUP=1<<8
};

int turncount = 0;�@//�^�[��(�����F���L�����U���^�[���A��F�G�L�����U���^�[��)

//typedef unsigned int UINT;
//void DisplayStatus(UINT s);
//void changeflag(UINT* s);
//void clearflag(UINT* s);
void DisplayStatus(Chara c);

//�퓬���[�h���ڍs����
void BattleMode(Chara* c, Mob m);
//�퓬���̃��j���[�\��
int DisplayMenu(void);
//�X�L���g�p���̃��j���[
int SkillMenu(Chara c);
//�U�����Ɩh�䑤�̃o�����[�^���g�����U���_���[�W�v�Z
int DamageCalc(Spec sp1, Spec sp2);
//hp�v�Z�Ǝ��S����
void BattleMessage(Spec sp1, Spec* sp2);

main(int argc, char *argv[])
{
	srand(time(0));
	//           name     hp  atk   def state maxhp mp
	Chara chara = { "��l��",2000,200,100,base,2000,150 ,
		// sk.name type usemp effect
		{{"hp��",0,50,800},
		 {"�U���̓A�b�v",1,50,120},
		 {"��Ԉُ��",2,20,0},
		{"�h��̓A�b�v",3,40,150} } };
	Mob mob[Mob_num] = {
		//name hp atk def state             rate%
		{"�Ga",700,150,800,poison | Atk_Skill,30},
		{ "�Gb",1500,200,200,burn | Atk_Skill,30 },
		{ "�{�X",5000,200,80,atkdown | Atk_Skill,10 } };

	//������0~mob_num-1�̐��l�����߂�
	int num = rand() % Mob_num;
	//���s���ɃR�}���h���C��������������
	if(argc > 1) {
		//�����𐔒l�ɕϊ�
		num = atoi(argv[1]);
		//�����̐��l��0~MOB_NUM-1�͈̔͂ɂȂ����
		if (num < 0 || num >= Mob_num)
		{
			num = rand() % Mob_num;
		}
	}
	//�퓬���[�h���J�n
	BattleMode(&chara, mob[num]);
	if(chara.sp.state & Dead) {
		printf("%s�̎��S�ɂ��Q�[���I�[�o�[\n", chara.sp.name);
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
	//�U���̓_�E���t���O��on�ŁCatkskill��off�̂Ƃ��i���L�����݂̂��̏����ɊY�����邱�Y���j
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
	printf("%s�̍U��\n", sp1.name);
	damage = DamageCalc(sp1, *sp2);
	printf(" % s�� % d�̃_���[�W\n", sp2->name,damage);
	sp2->hp -= damage;
	if (sp2->hp <= 0)
	{
		printf("%s�͓|�ꂽ\n",sp2->name);
		sp2->state |= Dead;
	}
}

void BattleMode(Chara* c, Mob m)
{
	int command, skill;
	system("cls");
	DisplayStatus(*c);
	printf("%s�������ꂽ�I\n", m.sp.name);
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
						printf("��Ԉُ�U�����󂯂�\n");
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
			printf("�X�L���̑I��\n");
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
					printf("HP��%d�񕜂���\n", c->skl[skill].effect);
					DisplayStatus(*c);
					break;
				case 1:
					c->sp.atk *= c->skl[skill].effect / 100.0;
					c->mp -= c->skl[skill].use_mp;
					c->sp.state |= atkup;
					printf("�U���̓A�b�v\n");
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
					printf("��Ԉُ킪�񕜂���\n");
					DisplayStatus(*c);
					break;
				case 3://�h��̓A�b�v�̏���
					//���L������def��1.5�{�ɂ���
					c->sp.def *= c->skl[skill].effect / 100.0;
					//���L������def�t���O�𗧂Ă�
					c->sp.state |= DefUP;
					//���L������mp���g�p���������炷
					c->mp -= c->skl[skill].use_mp;
					//���b�Z�[�W�Ŗh��̓A�b�v�������Ƃ�\��
					printf("�h��̓A�b�v������\n");
					//���L�����̃X�e�[�^�X��\��
					DisplayStatus(*c);
					break;
				default:
					break;
				}
			}
			else
			{
				printf("mp������Ȃ��I\n");
			}
		}

	}
}

	

//void DisplayStatus(UINT s)
//{
//	printf("���݂̏��----");
//	if (s & poison)
//	{
//		printf("��");
//	}
//	if (s & sleep)
//	{
//		printf("����");
//	}
//	if (s & paralysis)
//	{
//		printf("���");
//	}
//	if (s & burn)
//	{
//		printf("�Ώ�");
//	}
//	if (s & atkup)
//	{
//		printf("�U��up");
//	}
//	if (s & atkdown)
//	{
//		printf("�U��down");
//	}
//	if (s & base)
//	{
//		printf("�ʏ�");
//	}
//	printf("\n*******************\n");
//
//}

//void changeflag(UINT* s)
//{
//	int a;
//	while (1)
//	{
//		printf("�ǂ̏�ԁH\n");
//		printf("1.��2.����3.���4.�Ώ�5.�U��up6.�U��down0.�I��\n");
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
//		printf("�ǂ̏�Ԃ��������܂���\n");
//		printf("1.��2.����3.���4.�Ώ�5.�U��up6.�U��down0.�I��");
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
		printf("---------\n�R�}���h��I��\n");
		printf("1.��������\n2.�X�L��\n3.�h��\n\n");
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
		printf("----------\n�X�L����I��\n");
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
		printf("���: ");
		if (c.sp.state & poison) { printf("��"); }
		if (c.sp.state & sleep) { printf("����"); }
		if (c.sp.state & paralysis) { printf("���"); }
		if (c.sp.state & burn) { printf("�Ώ�"); }
		if (c.sp.state & atkup) { printf("�U���̓A�b�v"); }
		if (c.sp.state & atkdown) { printf("�U���̓_�E��"); }
		if (c.sp.state & DefUP) { printf("�h��̓A�b�v"); }
	}
	printf("\n********************\n");
}