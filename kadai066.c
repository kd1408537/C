#include<stdio.h>
main() {
	int num=1, sum = 0;
	do
	{
		printf("%d+", num);
		sum += num;
		num++;
	} while (sum<300);
	printf("%d", num);
	sum += num;
	printf("=%d\n", sum);
}