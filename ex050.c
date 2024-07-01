#include<stdio.h>
main() 
{
	int a = 100, b;
	int *p_a;
	p_a = &a;
	
	printf("a=%d &a=%p p_a=%p *p_a=%d &p_a=%p \n", a,&a,p_a,*p_a,&p_a);
}