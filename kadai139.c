#include<stdio.h>
void loop(char num1,int num2);
main()
{
	char n1;
	int n2;
	printf("•¶šH");
	scanf("%c", &n1);
	printf("®”H");
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