#include<stdio.h>
void change(int *a, int *b);
main()
{
	int n1, n2,c,d;
	printf("関数実行前の値:\na = ");
	scanf("%d", &n1);
	printf("b = ");
	scanf("%d", &n2);
	change(&n1, &n2);
	printf("関数実行前の値:\na = %d  b= %d ", n1, n2);
}
void change(int* a, int* b)
{
	int w;
	w = *a;
	*a = *b;
	*b = w;
}