#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int a_sum = 0, a_avg = 0;
	int b_sum = 0, b_avg = 0;

	printf("配列a=");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
		a_sum+=a[i];			
	}
	a_avg = a_sum / 10;
	printf("\n合計=%d\t平均=%d", a_sum, a_avg);

	printf("\n配列b=");
	for (int j = 0; j < 10; j++)
	{
		printf("%d ", b[j]);
		b_sum += b[j];				
	}
	b_avg = b_sum / 10;
	printf("\n合計=%d\t平均=%d", b_sum, b_avg);
}