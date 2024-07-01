#include<stdio.h>
#include<string.h>

main()
{
	char moji1[99];
	char moji2[99];
	
	printf("•¶Žš—ñ1 ?");
	scanf("%[a-zA-Z ]", moji1);
	//fgets(moji1,99, stdin);
	
	printf("•¶Žš—ñ2 ?");
	scanf("%[a-zA-Z ]", moji2);
	//fgets(moji2, 99, stdin);
	
	//moji2[strlen(moji2) - 1] = '\0';
	//moji1[strlen(moji1) - 1] = '\0';
	
	strcat(moji1, moji2);
	
	printf("%s",moji1);
}