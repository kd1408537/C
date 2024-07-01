#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int c[10];
	printf("配列aと配列bを交換する");
	for (int i = 0; i < 10; i++)
	{
		c[i] = a[i];
		a[i] = b[i];
		b[i] = c[i];
	}
	printf("\n配列a=");
	for (int k = 0; k < 10; k++)
	{
		printf("%d ", a[k]);
	}
	printf("\n配列b=");
	for (int j = 0; j < 10; j++)
	{
		printf("%d ", b[j]);
	}
}