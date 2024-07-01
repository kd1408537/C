#include<stdio.h>
main()
{
	int num1, num2, num3, sum;
	float  avg;

	printf("整数を三つ入力:");
	scanf("%d%d%d", &num1, &num2, &num3);

	sum = num1 + num2 + num3;//合計
	printf("合計%d", sum);
	
	avg = (double)sum / 3;//平均
	printf("  平均%.3f", avg);
}