#include<stdio.h>
main()
{
	int num, num2;
	printf("��̎����H\n");
	scanf("%d%d", &num, &num2);
	if (num > num2)
	{
		printf("%d�̕��K%d���%d�傫��\n", num,num2,num-num2);
	}
	else if (num2 > num)
	{
		printf("%d�̕��K%d���%d������\n", num, num2, num2-num);
	}
	else
	{
		printf("%d�̂�%d������\n", num, num2, num - num2);
	}

}