#include<stdio.h>
main() 
{

	int  ia=0,num=0;

	printf("数を入れて");
	scanf("%d", &num);
	
	while (ia!=num /*ia<num*/)
	{
		ia++;
		printf("*");
	}
}