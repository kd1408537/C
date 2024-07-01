#include<stdio.h>
main()
{
	float num1, num2, num3;
	float sum, avg;
	
	printf("1つの実数:");
	scanf("%f", &num1);
	printf("2つの実数:");
	scanf("%f", &num2);
	printf("3つの実数:");
	scanf("%f", &num3);
	
	sum = num1 + num2 + num3;
	printf("合計%.3f\n", sum);
	
	avg = sum / 3;
	printf("平均%.3f", avg);
	
}