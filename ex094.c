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
		printf("名前を入力:");
		scanf("%s", p->name);
		printf("生年月日を空白で区切って入力:");
		scanf("%d%d%d", &p->birth[0],
		&p->birth[1],
		&p->birth[2]);
		printf("血液型を入力:");
		scanf("%s", p->blood);
		p++;


	}
	p = pdat;
	for (int j = 0; j < 5; j++)
	{
		
		if (strcmp(p->blood , "a")==0)
		{
			printf("%s__", p->name);
			printf("%d年%02d月%02d日生まれ\n", p->birth[0],
				p->birth[1],
				p->birth[2]);
			printf("血液%s型\n", p->blood);
		}
		p++;
	}
	
}