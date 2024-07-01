#include<stdio.h>
main() 
{
	int a=100, b=200,w;
	int* p_a=&a, * p_b=&b;
	printf("実行前　a=%d　b=%d\n", *p_a, *p_b);
	w = *p_a;
	*p_a = *p_b;
	*p_b = w;
	
	printf("実行後　a=%d　b=%d\n", *p_a, *p_b);

	printf("&a=%d &b=%d w=%d\n",&a,&b,&w );
	printf("p_a=%d p_b=%d",p_a,p_b);

}