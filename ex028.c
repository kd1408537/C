#include<stdio.h>
main() 
{

	int gokei=0, ia=0;
	

	//printf("数を入れて");
	//scanf("%d", &ia);
	
	while (ia!=-999)
	{
		gokei += ia;
		printf("数を入れて");
		scanf("%d", &ia);
	}

	printf("合計=%d\n", gokei);
}