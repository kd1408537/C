#include<stdio.h>
main()
{
	int i=0 ,counter=0;
	int num;

	printf("数は？");
	scanf("%d", &num);
	
	do 
	{
		/*for (i = 0; i <= counter; i++)
		{
			printf("*");			
		}*/
		i = 0;
		do
		{
			printf("*");
			i++;
		} while (i<=counter);

		counter++;
		printf("\n");




	} while (counter < num);

}