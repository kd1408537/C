#include<stdio.h>
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo,int* amari);
main() 
{
	int a, b, c, d, e, f,g;
	printf("数値？");
	scanf("%d", &a);
	printf("数値？");
	scanf("%d", &b);
	shisoku(a, b, &c, &d, &e, &f,&g);
	puts("数値と数値の四則演算");
	printf("wa=%d sa=%d seki=%d syou=%d...%d\n", c, d, e, f,g);

}
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo,int *amari)
{
	*wa = x + y;
	*sa = x - y;
	*sk = x * y;
	*syo = x/ y ;
	*amari = x % y;
}