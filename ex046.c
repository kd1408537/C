#include<stdio.h>
main()
{
	int i, gokei;
	int a[][3] = { {10,20,30},{1,2,3} };
	for ( i = 0; i < 2; i++)
	{
		int gokei = 0;
		
		for (int j = 0; j < 3; j++)
		{
			printf("[%d][%d]=%d\n",i, j , a[i][j]);
			gokei += a[i][j];
		}
	printf("%d�s�ڂ̍��v=%d\n",i, gokei);

	}
	
	
	
	
}