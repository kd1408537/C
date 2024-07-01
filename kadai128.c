#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int* p_a, * p_b;
	p_a=a;
	p_b=b;
	while (*p_a!=0)
	{
		*p_b=*p_a + *p_b;
		p_a++;
		p_b++;
	}
	p_b=b;
	printf("”z—ñ b[] = ");
	while (*p_b!=0)
	{
		printf("%d ", *p_b);
		p_b++;
	}
}
