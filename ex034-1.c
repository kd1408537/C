#include<stdio.h>
main()
{
	int num;
	
	printf("数は？");
	scanf("%d", &num);
	
	if (num>0)
	{
		do 
		{			
		printf("*****\n");
		num--;
		} while (0 < num);

	}
	else
	{
		printf("error");
	}

}