#include<stdio.h>
main()
{
	double a, b;
	double* p_a = &a, * p_b = &b;
	printf("�����l1�H");
	scanf("%lf", &a);
	printf("%f\n", *p_a);
	printf("�����l2�H");
	scanf("%lf", &b);
	printf("%f\n", *p_b);
	if (*p_a>*p_b)
	{
		printf("�傫���ق�=%f", *p_a);
	}
	else if (*p_b>*p_a)
	{
		printf("�傫���ق�=%f", *p_b);
	}
	else
	{
		printf("same");
	}
}