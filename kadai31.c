#include<stdio.h>
main()
{
	float num, num2;
	printf("二つの実数？\n");
	scanf("%f%f", &num, &num2);
	if (num > num2)
	{
		printf("大きいほうは=%.6f\n", num);
	}
	else if(num2>num)
	{
		printf("大きいほうは=%.6f\n", num2);
	}
	else
	{
		printf("same");
	}

}