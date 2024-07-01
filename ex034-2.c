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
			/*for (int i = 0; i <= 5; i++)
			{
				printf("*");
			} */
			int i = 0;
			do
			{
				printf("*");
				i++
			} while (i<=5);
			
			num--;
			printf("\n");

		}while (0 < num);
		

	}
	else
	{
		printf("error");
	}

}