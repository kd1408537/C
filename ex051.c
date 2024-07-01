#include<stdio.h>
main() 
{
	int a, b, c;
	int* p_a=&a, * p_b=&b;
	a = 50, b = 10;
	c = *p_a + *p_b;
	printf("%d+%d=%d\n", *p_a, *p_b, c);
	printf("&a=%x &b=%x &c=%x\n", &a, &b, &c);
	printf("p_a=%x p_b=%x", p_a, p_b);
}