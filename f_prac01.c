#include<stdio.h>
main()
{
	int score=0;
	char ch,name[256];
	FILE* fp;
	printf("名前");
	scanf("%s", name);
	while (1)
	{
		printf("現在のスコア(eで終了):%d\n",score);
		ch = getchar();
		if (ch == 'e')
		{
			break;
		}
		score++;
	}
	fp=fopen("f_prac01.txt","w");
	fprintf(fp, "名前:%s\n現在のスコア:%d\n", name, score);
	fclose(fp);
}