#include<stdio.h>
main()
{
	double a, b;
	double* p_a = &a, * p_b = &b;
	printf("実数値1？");
	scanf("%lf", &a);
	printf("%f\n", *p_a);
	printf("実数値2？");
	scanf("%lf", &b);
	printf("%f\n", *p_b);
	if (*p_a>*p_b)
	{
		printf("大きいほう=%f", *p_a);
	}
	else if (*p_b>*p_a)
	{
		printf("大きいほう=%f", *p_b);
	}
	else
	{
		printf("same");
	}
}