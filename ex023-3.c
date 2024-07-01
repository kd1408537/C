#include<stdio.h>
main()
{
	int operator;
	int a=0, b=0;
	
	printf("演算子を入力する\n");
	scanf("%d", &operator);
	
	printf("二つの整数を入力する\n\n");
	scanf("%d%d", &a, &b);

	if (operator==1)	
	{
		printf("%d",a+b);

	}
	else if (operator==2)
	{
		printf("%d",a - b);
	}
	else if(operator==3)
	{
		printf("%d",a * b);
	}
	else if (operator==4)
	{
		printf("%d",a / b);
	}
	else 
	{
		printf("bakanisiteruno");
	}
}