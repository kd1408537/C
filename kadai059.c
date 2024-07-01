#include<stdio.h>
main()
{
	printf("\t");
	for(int i=1;i<10;i++)
	{
		printf("%d\t", i);
	}
	printf("\n=========================================================================");
	for (int k = 1; k < 10; k++)
	{
		printf("\n%d | ",k);
		for (int o = 0; o < 5 - k; o++)
		{
			if (k == 1)
			{
				printf(" ");
			}
			printf(" ");
		}
		for (int j = 1; j < 10; j++)
		{
			
			printf("%d ", k * j);
		}
	}
}