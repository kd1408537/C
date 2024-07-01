#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int c[10];
	printf("”z—ña‚Æ”z—ñb‚Ì‰ÁŽZŒ‹‰Ê‚ð”z—ñc‚ÉŠi”[‚·‚é");
	for (int i = 0; i < 10; i++)
	{
		c[i]=a[i] + b[i];
			
	}
	printf("\n”z—ña=");
	for (int k = 0; k < 10; k++)
	{
		printf("%d ", a[k]);
	}
	printf("\n”z—ñb=");
	for (int j = 0; j < 10; j++)
	{
		printf("%d ", b[j]);
	}
	printf("\n”z—ñc=");
	for (int g = 0; g < 10; g++)
	{
		printf("%d ", c[g]);
	}
}