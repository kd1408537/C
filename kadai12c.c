#include<stdio.h>
main()
{
	int a[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
	int* p_a;
	printf("�z��a\n");
	p_a = a[0];
	for (int i = 0; i < 5; i++)
	{
		for (int k = 0; k < 5; k++)
		{
			printf("%2d ", *p_a);
			p_a++;
		}
		printf("\n");
		
	}
	
}