#include<stdio.h>
main()
{
	int num=0, sum = 0;
	float counter = 0;
	while (num!=-999)
	{
		printf("整数（-999で終了）");
		scanf("%d", &num);
		if (num != -999)
		{
			sum += num;
			counter++;

		}
	}
	printf("合計=%d",sum);
	printf("平均=%.2f",(float)sum/counter);
}