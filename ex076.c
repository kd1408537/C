#include <stdio.h>
void sumavg(int d1, int d2, int* sum, float* avg);
main()
{
	int a, b, c;
	float d;
	printf("数値？");
	scanf("%d", &a);
	printf("数値？");
	scanf("%d", &b);

	sumavg(a, b, &c, &d);
	printf("合計%d 平均%.2f", c, d);
}

void sumavg(int d1, int d2, int* sum, float* avg)
{
	*sum = d1 + d2;
	*avg =(float) *sum / 2;
}