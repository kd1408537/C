#include<stdio.h>

main()
{

	int data[] = { 30,7,25,16,40 };
	for(int i=1;i<5;i++)
	{
		for (int j = i-1; j >= 0; j--)
		{
			if(data[j+1]>=data[j])
			{
				break;
			}
			else
			{
				int w;
				w = data[j];
				data[j] = data[j + 1];
				data[j + 1] = w;
			}
			
		}
	}
	for (int k = 0; k < 5; k++)
	{
		printf("%d ", data[k]);
	}
	
}