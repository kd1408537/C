#include<stdio.h>
main()
{
	int a[20] = { 3,5,7,9,11,13,15,17,19,21 };
	int b[] = { 4,8,12,16,20,24,28,32,38,42 };
	int* p_a, * p_b;
	p_a = a;
	p_b = b;
	printf("---実行前---\n");
	printf("配列 a[] = ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	
	
	printf("\n---実行後---\n");
	p_a = &a[10];
	p_b = b;
	for (int i = 0; i < 10; i++) {
		*p_a = *p_b;
		p_a++;
		p_b++;
	}
	p_a = a;
	p_b = b;
	printf("配列 a[] = ");
	for (int i = 0; i <20; i++) {
		printf("%d ", a[i]);
	}
	
}