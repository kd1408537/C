#include<stdio.h>
main()
{
	char c;
	char* c_p;
	c_p = &c;
	printf("1��������");
	scanf("%c", &c);

	printf("���̕���%c", *c_p+0x1);
}