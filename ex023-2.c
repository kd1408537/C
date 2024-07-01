#include<stdio.h>
main()
{
	int year;
	printf("西暦を入力する\n");
	scanf("%d", &year);
	
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	/*１：西暦が4で割り切れる年は閏年とする
	２：ただし100で割り切れる年は平年とする
	３：ただし400で割り切れる年は閏年とする*/
	{
		printf("閏年です。");

	}
	else
	{
		printf("平年です。");
	}
}