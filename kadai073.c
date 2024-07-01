#include<stdio.h>
main()
{
	int num1;
	char i;
	printf("10進数の整数？\n");
	scanf("%d", &num1);
	while (getchar() != '\n');
	printf("アルファベット o or h or d\n");
	scanf("%c", &i);
	switch (i)
	{
	case 'o':
	case'O':
		printf("%o", num1);

		break;
	case 'x':
	case'X':
		printf("%x", num1);

		break;

	default:
		printf( "%d ",num1);

	}
}