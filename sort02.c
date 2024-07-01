#include<stdio.h>

main()
{

	int data[] = { 30,7,25,16,40 };
	for(int i=4;i>0;i--)
	{
		for (int j = 0; j < i; j++)
		{
			if(data[j]>data[j+1])
			{
				int w;
				w = data[j];
				data[j] = data[j + 1];
				data[j+1] = w;

			}

		}
	}
	for (int k = 0; k < 5; k++)
	{
		printf("%d ", data[k]);
	}
	
}