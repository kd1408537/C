#include<stdio.h>
main()
{
	int num1, num2;
	printf("整数1？");
	scanf("%d", &num1);
	printf("整数2？");
	scanf("%d", &num2);
	while ((getchar()) != '\n');
	char i;
	printf("演算子を入れて\n");
	scanf("%c", &i);
	switch (i)
	{
	case '+':
		printf("%d+%d=%d", num1, num2, num1 + num2);

		break;
	case '-':
		printf("%d-%d=%d", num1, num2, num1 - num2);

		break;
	case '*':
		printf("%d*%d=%d", num1, num2, num1 * num2);

		break;
	case '/':
		printf("%d/%d=%f", num1, num2, (float)num1 / num2);

		break;
	case '%':
		printf("あまりです");
		break;
	default:
		printf("その他です");

	}
}