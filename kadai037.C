#include<stdio.h>
main()
{
	int  num;
	printf("0‚©‚ç100‚Ü‚Å‚Ì®”H\n");
	scanf("%d", &num);
	if (num >= 90)
	{
		printf("5\n");
	}

	else if (num>=80&&num < 90)
	{
		printf("4\n");
	}
	else if (num >= 50 && num < 80)
	{
		printf("3\n");
	}
	else if (num >= 30 && num < 50)
	{
		printf("2\n");
	}
	else
	{
		printf("1");
	}


}