#include<stdio.h>
main()
{
	char monji,monji_big;
	printf("�p��r�J�O");
	scanf("%c", &monji);
	monji_big = monji - 0x20;
	printf("��r�J�O%c\n", monji_big);
	
}