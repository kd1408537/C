#include<stdio.h>
struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};


main()
{
	struct profile pdat;
	struct  profile* p;
	p = &pdat;
	printf("���O�����:");
	scanf("%s", p->name);
	printf("���N�������󔒂ŋ�؂��ē���:");
	scanf("%d%d%d",& p->birth[0],
					& p->birth[1],
					& p->birth[2]);
	printf("���t�^�����:");
	scanf("%s", p->blood);

	
	printf("%s__", p->name);
	printf("%d�N%02d��%02d�����܂�\n",p->birth[0],
		p->birth[1],
		p->birth[2]);
	printf("���t%s�^\n", p->blood);
}