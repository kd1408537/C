#include<stdio.h>
main()
{
	int num=0, sum = 0;
	float counter = 0;
	while (num!=-999)
	{
		printf("�����i-999�ŏI���j");
		scanf("%d", &num);
		if (num != -999)
		{
			sum += num;
			counter++;

		}
	}
	printf("���v=%d",sum);
	printf("����=%.2f",(float)sum/counter);
}