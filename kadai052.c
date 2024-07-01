#include <stdio.h>
main()
{
	int i,j,counter = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 20; j++)
		{
			counter++;
			printf("%2d ", counter);
		}
		printf("\n");
	}

}