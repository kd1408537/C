#include <stdio.h>
main()
{   
	int i = 20;
	do
	{
		printf("%2d  ", i);
		
		if (i == 11)
		{
			printf("\n");
		}
		i--;
	} while (i > 0);
}