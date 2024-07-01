#include<stdio.h>
int  tbl_gokei3(int tbl[], int num);

main()
{
	int a[] = { 10,20,30,40,50 }, gokei;
	gokei=tbl_gokei3(a, 5);
	printf("gokei=%d\n", gokei);

}

int tbl_gokei3(int tbl[],int num)
{
	int gokei=0;
	for (int  i = 0; i < num; i++)
	{
		gokei += tbl[i];
	}
	return(gokei);
}