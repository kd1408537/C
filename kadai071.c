#include<stdio.h>
main()
{
	int num1, num2;
	printf("®”1H");
	scanf("%d", &num1);
	printf("®”2H");
	scanf("%d", &num2);
	while ((getchar()) != '\n');
	char i;
	printf("‰‰Zq‚ğ“ü‚ê‚Ä\n");
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
		printf("‚ ‚Ü‚è‚Å‚·");
		break;
	default:
		printf("‚»‚Ì‘¼‚Å‚·");

	}
}