#include<stdio.h>
main()
{
	int a[10],i=0,num;
	while (1)
	{
		printf("Ži-999ĹIšj");
		scanf("%d", &num);
		if (num == -999||i==10)
		{
			break;
		}
		a[i] = num;
		i++;
	}
	printf("zńc=");
	for (int k = 0; k < i; k++)
	{
		printf("%d ", a[k]);
	}
}