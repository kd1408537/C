#include <stdio.h>
long bekijyou(int a, int b);
main()
{
	int a, b;
	long kotae;
	printf("数値1？");
	scanf("%d", &a);
	printf("数値2？");
	scanf("%d", &b);
	kotae = bekijyou(a, b);
	printf("%dの%d乗は　%ld", a,b, kotae);
}
long bekijyou(int a, int b)
{
	long kotae = 1;
	int i;
	for(i=0;i<b;i++)
	{
		kotae *= a;
	}
	return(kotae);
}