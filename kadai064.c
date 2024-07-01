#include <stdio.h>
main()
{   
	int i = 20;
	while (i>0)
	{
		printf("%2d ", i);
		
		if (i == 11)
		{
			printf("\n");
		}
		i--;
	} 
}