#include <stdio.h>
main()
{   
	int i = 1;
	while (i < 21)
	{
		printf("%2d  ", i);
		
		if (i == 10)
		{
			printf("\n");
		}
		i++;
	}
	
}