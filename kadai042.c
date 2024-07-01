#include<stdio.h>
main()
{
	int num = 1;
	int sum = 0;
	
	while (sum<=300)
	{		
		printf("%d+", num);
		sum = sum + num;
		num++;
		

	}
	

		printf("\b = % d", sum);

}