#include<stdio.h>
void loop(char num1,int num2);
main()
{
	char n1;
	int n2;
	printf("文字？");
	scanf("%c", &n1);
	printf("整数？");
	scanf("%d", &n2);
	loop(n1, n2);
}

void loop(char num1, int num2)
{
	for (int i = 0; i < num2; i++)
	{
		printf("%c", num1);
	}
}