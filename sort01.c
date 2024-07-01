#include<stdio.h>

main()
{

	int data[] = { 30,7,25,16,40 };
	for (int i = 0; i < 4; i++)
	{
		for (int j=i+1; j < 5; j++)
		{
			if (data[i]> data[j])
			{
				int w;
				w = data[i];
				data[i] = data[j];
				data[j] = w;
			}
		}
	}
	for (int k = 0; k < 5; k++)
	{
		printf("%d ", data[k]);
	}
	
}