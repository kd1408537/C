#include<stdio.h>
main()
{
	int a[] = { 3,5,7,9,11,13,15,17,19,21 };
	int b[] = { 4,8,12,16,20,24,28,32,38,42 };
	int* p_a, * p_b;
	p_a = a;
	p_b = b;
	printf("---���s�O---\n");
	printf("�z�� a[] = ");
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		printf("%d ", a[i]);
	}
	printf("\n�z�� b[] = ");
	for (int i = 0; i < sizeof(b) / sizeof(b[0]); i++) {
		printf("%d ", b[i]);
	}
	printf("\n");
	printf("\n---���s��---\n");
	p_a = &a[(sizeof(a) / sizeof(a[0])) - 1];
	p_b = b;
	for (*p_b = *p_a; *p_a == 3; *p_b++, *p_a--);
	p_a = a;
	p_b = b;
	printf("�z�� a[] = ");
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		printf("%d ", a[i]);
	}
	printf("\n�z�� b[] = ");
	for (int i = 0; i < sizeof(b) / sizeof(b[0]); i++) {
		printf("%d ", b[i]);
	}
}