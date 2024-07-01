#include<stdio.h>
main()
{
	float num,sum=0,avg,a[3];
	
	for (int i = 0; i < 3; i++)
	{
		printf("実数を入力:");
		scanf("%f", &num);
		a[i] = num;
		sum += num;
	}
	avg = (float)sum / 3;
	
	printf("合計は%.2f\n",sum);
	printf("平均は%.2f",avg);


}