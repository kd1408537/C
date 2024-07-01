#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30}, {40,50,60}, {70,80,90} };
	int* p_tbl, i;
	p_tbl = tbl[0];
	printf("2ŽŸŒ³”z—ñTBL‚Ì“à—e");
	for (int i = 0; i < 3*3; i++)
	{
		printf("%d@",*p_tbl++);
		
	}
}