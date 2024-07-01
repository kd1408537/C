#include<stdio.h>
main()
{
	int sum = 0, num;
	
	
	while(1)
	{
		printf("数を入れて:");
		scanf("%d", &num);

		if (num == -999)
		{
			break;
		}
		sum += num;

	}
	printf("合計%d",sum);
}