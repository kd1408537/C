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
	atkdown = 1 << 5,
	Dead=1<<6,  //dead flag
	Atk_Skill=1<<7 //���̃t���O��on�̃L���������ُ��Ԃ�t���ł��Ȃ�
};

int turncount = 0;

typedef unsigned int UINT;
void displaystatus(UINT s);
void changeflag(UINT* s);
void clearflag(UINT* s);
void Displaystatus(UINT* s);

//�퓬���[�h���ڍs����
void BattleMode(Chara* c, Mob m);
//�퓬���̃��j���[�\��
int DisplayMenu(void);
//�X�L���g�p���̃��j���[
int SkillMenu(Chara c);
//�U�����Ɩh�䑤�̃o�����[�^���g�����U���_���[�W�v�Z
int DamageCalc(Spec sp1, Spec sp2);
//hp�v�Z�Ǝ��S����
void BattlemESSAGE(Spec sp1, Spec* sp2);

main(int argc, char *argv[])
{
	srand(time(0));
	//           name     hp  atk   def state maxhp mp
	Chara chara = { "��l��",2000,200,100,Base,2000,150 ,
		// sk.name type usemp effect
		{{"hp��",0,50,800},
		 {"�U���̓A�b�v",1,50,120},
		 {"��Ԉُ��",2,20,0}} };
	Mob mob[Mob_Num] = {
		//name hp atk def state             rate%
		{"�Ga",700,150,800,poison | Atk_Skill,30}
		{ "�Gb",1500,200,200,burn | Atk_Skill,30 }
		{ "�{�X",5000,200,80,atkdown | Atk_Skill,10 } };

	//������0~mob_num-1�̐��l�����߂�
	int num = rand() % Mob_num;
	//���s���ɃR�}���h���C��������������
	if(arg > 1) {
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
