#include<stdio.h>
main()
{
	int num, num2;
	printf("二つの実数？\n");
	scanf("%d%d", &num, &num2);
	if (num > num2)
	{
		printf("%dの方ガ%dより%d大きい\n", num,num2,num-num2);
	}
	else if (num2 > num)
	{
		printf("%dの方ガ%dより%d小さい\n", num, num2, num2-num);
	}
	else
	{
		printf("%dのと%d等しい\n", num, num2, num - num2);
	}

}