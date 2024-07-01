#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	int* p_a;
	int sum = 0;
	float b[] = { 11.1,22.2,33.3,44.4 };
	float* p_b;
	p_a = a;
	int size = sizeof a;
	for (int i = 0; i < size/4; i++)
	{
		sum += *p_a;
		p_a++;
	}
	printf("‡Œv=%d  •½‹Ï=%.3f\n", sum, (float)sum / 6);
	float sum2 = 0;
	int k, size2;
	k = sizeof(float);
	size2 = (sizeof b) / k;
	p_b = b;
	for (int j = 0; j < size2; j++)
	{
		sum2 += *p_b;
		p_b++;
	}
	printf("‡Œv=%.3f  •½‹Ï=%.3f", sum2, sum2 / 4);
}