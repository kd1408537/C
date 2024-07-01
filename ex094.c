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
		printf("–¼‘O‚ð“ü—Í:");
		scanf("%s", p->name);
		printf("¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
		scanf("%d%d%d", &p->birth[0],
		&p->birth[1],
		&p->birth[2]);
		printf("ŒŒ‰tŒ^‚ð“ü—Í:");
		scanf("%s", p->blood);
		p++;


	}
	p = pdat;
	for (int j = 0; j < 5; j++)
	{
		
		if (strcmp(p->blood , "a")==0)
		{
			printf("%s__", p->name);
			printf("%d”N%02dŒŽ%02d“ú¶‚Ü‚ê\n", p->birth[0],
				p->birth[1],
				p->birth[2]);
			printf("ŒŒ‰t%sŒ^\n", p->blood);
		}
		p++;
	}
	
}