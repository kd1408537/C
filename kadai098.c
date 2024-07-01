#include<stdio.h>
main()
{
	int data[] = { 10,5,23,29,2,6,3,1,70,100 };
	int max, min;
	for (int i = 0; i < 10-2; i++)
	{
		for (int k = i+1; k < 10 ; k++)
		{
			if (data[i] > data[k])
			{
				int w=data[i];
				data[i] = data[k];
				data[k] = w;
			}
		}
	}

	min = data[0];
	max = data[9];
	printf("data=");
	for (int j = 0; j < 10; j++)
	{
		printf("%d ", data[j]);
	}
	printf("Å‘å’l=%d  Å¬’l=%d", max, min);
	
}
