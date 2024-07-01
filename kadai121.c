#include<stdio.h>
main()
{
	int a = 100,  b = 10;
	int* p_a = &a;
	int*p_b = &b;

	printf("%d+%d=%d\n", *p_a, *p_b, *p_a + *p_b);
	printf("%d-%d=%d\n", *p_a, *p_b, *p_a - *p_b);
	printf("%d*%d=%d\n", *p_a, *p_b, *p_a * *p_b);
	printf("%d/%d=%d", *p_a, *p_b, *p_a / *p_b);
}