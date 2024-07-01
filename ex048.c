#include<stdio.h>
main()
{
	int apartment[2][2][3] = { {{3,4,5},{4,5,6} }, { { 2,2,3 }, { 2,5,6 } } };
;
	int sum = 0;
	int  i, j, k;
	for (i=0;i<2;i++)
	{
		for (j=0; j < 2; j++)
		{			
			printf("アパート%d（%d階）", i+1, j+1 );
			for (k = 0; k < 3; k++)
			{
				printf("%d ", apartment[i][j][k]);
				sum += apartment[i][j][k];

			}
			
		}
		printf("\n");
	}
	printf("\n全体で%d人住んでいます。", sum);

}