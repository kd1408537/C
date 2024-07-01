#include<stdio.h>
main()
{	
	int i = 0;
	while (i<=20)
	{
		
		if (i % 2 == 0)
		{
			i++;
			continue;
			
		}
		printf("%d  ", i);
		i++;
		
	}
}
