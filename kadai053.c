#include<stdio.h>
main()
{
	int num;
	printf("®”H");
	scanf("%d", &num);
	for (int i=0;  i<=10; i++)
	{
		printf("%d\t", num+i);
	}
}	