#include<stdio.h>
main() 
{
	printf("二つの数値？\n");
	int num1,num2;
	scanf("%d %d", &num1, &num2);
	printf("***%dと%dの四則演算***%d+\n%d=%d\n", num1, num2,num1,num2,num1+num2);
	printf("%d-%d=%d\n", num1,num2,num1-num2);
	printf("%d*%d=%d\n", num1,num2,num1*num2);
	printf("%d/%d=%dあまり%d", num1,num2,num1/num2,num1%num2);
}
