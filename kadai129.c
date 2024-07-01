#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int* p_a, * p_b;
	p_a=a;
	p_b=b;
	printf("---実行前---\n");
	printf("配列 a[] = ");
	while (*p_a != 0)
	{
		printf("%d ", *p_a);
		p_a++;
	}
	printf("\n配列 b[] = ");
	while (*p_b != 0)
	{
		printf("%d ", *p_b);
		p_b++;
	}
	printf("\n---実行後---\n");
	int w = 0;
	p_a = a;
	p_b = b;
	while (*p_a!=0)
	{
		w = *p_a;
		*p_a = *p_b;
		*p_b = w;
		p_a++;
		p_b++;
	}
	p_b=b;
	p_a = a;
	printf("配列 a[] = ");
	while (*p_a != 0)
	{
		printf("%d ", *p_a);
		p_a++;
	}
	printf("\n配列 b[] = ");
	while (*p_b!=0)
	{
		printf("%d ", *p_b);
		p_b++;
	}
}
