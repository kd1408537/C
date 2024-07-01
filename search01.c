#include<stdio.h>
main()
{
	int s, i, d[] = { 10,2,3,4,5,6,23,12,59,34 };
	printf("’Tõ’l‚Í");
	scanf("%d", &s);

	for(i=0;i<10;i++ )
	{
		if (d[i] == s)
		{
			break;
		}
	}
	if (i >= 10)
	{
		printf("can't search\n");
	}
	else
	{
		printf("found in d[%d]\n", i);
	}
}