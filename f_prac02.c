#include<stdio.h>
main()
{
	int score = 0,  maxscore= 0;;
	char ch,name[256],maxname[256];
	FILE* fp;
	
	fp = fopen("f_prac01.txt", "r");
	fscanf(fp, "%s%d", maxname, &maxscore);
	printf("name:%s maxscore:%d\n",maxname,maxscore);
	fclose(fp);
	
	printf("���O");
	scanf("%s", name);
	getchar();
	while (1)
	{
		printf("���݂̃X�R�A(e�ŏI��):%d\n",score);
		ch = getchar();
		if (ch == 'e')
		{
			break;
		}
		score++;
	}
	
	
	if (score>maxscore)
	{
		fp = fopen("f_prac01.txt", "w");
		fprintf(fp, "%s\n%d\n", name, score);
		fclose(fp);
		printf("�X�V����");
	}
	
}