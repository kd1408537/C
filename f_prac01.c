#include<stdio.h>
main()
{
	int score=0;
	char ch,name[256];
	FILE* fp;
	printf("���O");
	scanf("%s", name);
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
	fp=fopen("f_prac01.txt","w");
	fprintf(fp, "���O:%s\n���݂̃X�R�A:%d\n", name, score);
	fclose(fp);
}