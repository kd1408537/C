#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int c[10];
	printf("配列aから配列cにコピー");
	for (int i = 0; i < 10; i++)
	{
		c[i] = a[i];
			
	}
	printf("\n配列a=");
	for (int k = 0; k < 10; k++)
	{
		printf("%d ", a[k]);
	}
	printf("\n配列c=");
	for (int j = 0; j < 10; j++)
	{
		printf("%d ", c[j]);
	}
}