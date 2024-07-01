#include<stdio.h>
main()
{
	int a[10],i=0,num;
	while (1)
	{
		printf("整数（-999で終了）");
		scanf("%d", &num);
		if (num == -999||i==10)
		{
			break;
		}
		a[i] = num;
		i++;
	}
	printf("配列c=");
	for (int k = 0; k < i; k++)
	{
		printf("%d ", a[k]);
	}
}