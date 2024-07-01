#include<stdio.h>
main()
{
	int sum, num,dnum, cnt;
	sum = cnt = 0;
	printf("®É");
	while (scanf("%d" , &num) != EOF)
	{
		sum += num;
		cnt++;
		printf("®É");

	}

	printf("‡Œv=%d •½‹Ï=%.2f\n", sum, (float)sum / cnt);
}