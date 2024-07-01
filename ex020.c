#include<stdio.h>
main()
{
	char monji,monji_big;
	printf("小文字入力");
	scanf("%c", &monji);
	monji_big = monji - 0x20;
	printf("文字入力%c\n", monji_big);
	
}