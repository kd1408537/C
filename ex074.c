#include<stdio.h>

void display1(int n);
void display2(int* n);

main()
{
	int a, b;
	printf("®”a");
	scanf("%d",&a);
	display1(a);
	printf("a=%d\n\n", a);
	printf("®”b");
	scanf("%d", &b);
	display2(&b);
	printf("b=%d\n\n", b);

}

void display1(int n)
{
	printf("”’la(&n:%d)‚Í%d‚Å‚·\n", &n, n);
	n += 10;
}

void display2(int* n)
{
	printf("”’lb(&n:%d)‚Í%d‚Å‚·\n", n, *n);
	*n += 10;
}