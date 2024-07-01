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
	atkdown = 1 << 5
};

typedef unsigned int UINT;
void displaystatus(UINT s);
void changeflag(UINT* s);
void clearflag(UINT* s);

main()
{
	UINT MyState = base;
	displaystatus(MyState);
	changeflag(&MyState);
	displaystatus(MyState);
	clearflag(&MyState);
	displaystatus(MyState);
}
void displaystatus(UINT s)
{
	printf("���݂̏��----");
	if (s & poison)
	{
		printf("��");
	}
	if (s & sleep)
	{
		printf("����");
	}
	if (s & paralysis)
	{
		printf("���");
	}
	if (s & burn)
	{
		printf("�Ώ�");
	}
	if (s & atkup)
	{
		printf("�U��up");
	}
	if (s & atkdown)
	{
		printf("�U��down");
	}
	if (s & base)
	{
		printf("�ʏ�");
	}
	printf("\n*******************\n");

}

void changeflag(UINT* s)
{
	int a;
	while (1)
	{
		printf("�ǂ̏�ԁH\n");
		printf("1.��2.����3.���4.�Ώ�5.�U��up6.�U��down0.�I��\n");
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
		printf("�ǂ̏�Ԃ��������܂���\n");
		printf("1.��2.����3.���4.�Ώ�5.�U��up6.�U��down0.�I��");
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
