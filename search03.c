#include<stdio.h>
main()
{
	int s, low,high,mid, d[] = {1,2,3,4,23,32,43,55,65,76,102 };
	printf("íTçıílÇÕ");
	scanf("%d", &s);

	low = 0;
	high = 10;
	while (low<=high)
	{
		mid = (high + low) / 2;
		if (s == d[mid])
		{
			break;
		}
		if (s > d[mid])
		{
			low = mid + 1;
		}
		if (s < d[mid])
		{
			high = d[mid] - 1;
		}
	}
	if (low>high)
	{
		printf("can't search\n");
	}
	else
	{
		printf("found in d[%d]\n", mid);
	}
}