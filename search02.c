#include<stdio.h>
main()
{
	int s, i, d[11] = { 10,2,3,4,5,6,23,12,59,34,32 };
	printf("’Tõ’l‚Í");
	scanf("%d", &s);
	d[10] =s ;
	i = 0;
	while (s!=d[i])
	{
		i++;
	}
	if (i == 10)
	{
		printf("can't search\n");
	}
	else
	{
		printf("found in d[%d]\n", i);
	}
}