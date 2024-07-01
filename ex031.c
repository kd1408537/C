#include<stdio.h>
main()
{
	int i,sum = 0;

	for ( i = 1; i < 11; i++)
	{
		sum += i;
		printf("1から%d%までの和=%d\n", i , sum);
		
	}
}