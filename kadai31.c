#include<stdio.h>
main()
{
	float num, num2;
	printf("��̎����H\n");
	scanf("%f%f", &num, &num2);
	if (num > num2)
	{
		printf("�傫���ق���=%.6f\n", num);
	}
	else if(num2>num)
	{
		printf("�傫���ق���=%.6f\n", num2);
	}
	else
	{
		printf("same");
	}

}