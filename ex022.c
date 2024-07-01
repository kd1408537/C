#include<stdio.h>
main() 
{
	int year;
	printf("生年(西暦）を入力する\n");
	scanf("%d", &year);
	
	if (year < 1989)
	{
		printf("s昭和です");
	}
	else
	{
		printf("h平成です。");
	}
}