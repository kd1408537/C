#include<stdio.h>
#include<stdlib.h>
main(int argc,char  *argv[])
{
	
	int sum = 0;
	if (argc == 3)
	{
		sum = atoi(argv[1])+ atoi(argv[2]);
		printf("%d", sum);
	}
	else
	{
		printf("error");	
	}
	
}