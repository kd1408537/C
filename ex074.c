#include<stdio.h>

void display1(int n);
void display2(int* n);

main()
{
	int a, b;
	printf("整数a");
	scanf("%d",&a);
	display1(a);
	printf("a=%d\n\n", a);
	printf("整数b");
	scanf("%d", &b);
	display2(&b);
	printf("b=%d\n\n", b);

}

void display1(int n)
{
	printf("数値a(&n:%d)は%dです\n", &n, n);
	n += 10;
}

void display2(int* n)
{
	printf("数値b(&n:%d)は%dです\n", n, *n);
	*n += 10;
}