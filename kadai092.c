#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int c[10];
	printf("�z��a����z��c�ɃR�s�[");
	for (int i = 0; i < 10; i++)
	{
		c[i] = a[i];
			
	}
	printf("\n�z��a=");
	for (int k = 0; k < 10; k++)
	{
		printf("%d ", a[k]);
	}
	printf("\n�z��c=");
	for (int j = 0; j < 10; j++)
	{
		printf("%d ", c[j]);
	}
}