#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 }, c[10];
	int i = 0;
	for (int k=9;k>=0;k--)
	{
			c[i] = a[k];
			i++;
	}
	
	printf("”z—ña=");
	for (int n = 0; n < 10; n++)
	{
		printf("%d ", a[n]);
	}
	printf("\n”z—ñc=");
	for (int j = 0; j < 10; j++)
	{
		printf("%d ", c[j]);
	}
}