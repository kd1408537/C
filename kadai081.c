#include<stdio.h>
main() {
	int sum = 0, counter = 0;
	int i;
	while (1)
	{
		printf("整数（-999で終了）");
		scanf("%d", &i);
		if (i == -999)
		{
			break;
		}
		sum += i;
		counter++;
	}
	printf("合計%d\n", sum);
	printf("平均%f", (float)sum / counter);
}