#include<stdio.h>
void compare(int num1, int num2, int num3, int* max, int* min);
main()
{
	int n1, n2, n3, max, min;
	printf("整数三つ入力");
	scanf("%d %d %d" , &n1, &n2, &n3);
	compare(n1, n2, n3, &max, &min);
	printf("最大値=%d 最小値=%d\n", max, min);
}

void compare(int num1, int num2, int num3, int* max, int* min)
{
	/*if (num1>num2 && num2>num3)
	{
		*max = num1;
		*min = num3;
	}
	if (num1 > num3 && num3 > num2)
	{
		*max = num1;
		*min = num2;
	}
	if (num2 > num1 && num1 > num3)
	{
		*max = num2;
		*min = num3;
	}
	if (num2 > num1 && num3 > num1)
	{
		*max = num2;
		*min = num1;
	}
	if (num3 > num2 && num2 > num1)
	{
		*max = num3;
		*min = num1;
	}
	if (num3 > num2 && num1 > num2)
	{
		*max = num3;
		*min = num2;
	}*/

	*max = (num1 > num2)?(num1 > num3?num1: num3):(num2 > num3?num2: num3);
	*min = (num1 < num2)?(num1 < num3?num1: num3):(num2 < num3?num2 : num3);

}