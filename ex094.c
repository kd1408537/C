#include<stdio.h>
struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};


main()
{
	struct profile pdat[5];
	struct  profile* p;
	p = pdat;
	for (int i = 0; i < 5; i++)
	{
		printf("���O�����:");
		scanf("%s", p->name);
		printf("���N�������󔒂ŋ�؂��ē���:");
		scanf("%d%d%d", &p->birth[0],
		&p->birth[1],
		&p->birth[2]);
		printf("���t�^�����:");
		scanf("%s", p->blood);
		p++;


	}
	p = pdat;
	for (int j = 0; j < 5; j++)
	{
		
		if (strcmp(p->blood , "a")==0)
		{
			printf("%s__", p->name);
			printf("%d�N%02d��%02d�����܂�\n", p->birth[0],
				p->birth[1],
				p->birth[2]);
			printf("���t%s�^\n", p->blood);
		}
		p++;
	}
	
}