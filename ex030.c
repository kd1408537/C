#include<stdio.h>
main() 
{

	int  num=0,counter=0;

	printf("数を入れて\n");
	scanf("%d", &num);
	
	while (counter<11)
	{
		
		printf("%d+%d=%d\n",num,counter,num+counter);
		counter++;
	}
}