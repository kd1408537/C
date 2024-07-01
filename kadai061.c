#include <stdio.h>
main()
{   
	int i = 1;
	do
	{
		printf("%2d  ", i);
		i++;
		if (i == 11)
		{
			printf("\n");
		}
	} while (i < 21);
}