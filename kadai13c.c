#include<stdio.h>
void change(int *a, int *b);
main()
{
	int n1, n2,c,d;
	printf("�֐����s�O�̒l:\na = ");
	scanf("%d", &n1);
	printf("b = ");
	scanf("%d", &n2);
	change(&n1, &n2);
	printf("�֐����s�O�̒l:\na = %d  b= %d ", n1, n2);
}
void change(int* a, int* b)
{
	int w;
	w = *a;
	*a = *b;
	*b = w;
}