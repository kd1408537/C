#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
main()
{

	int data[20];
	for(int i=0;i<20;i++)
	{
		data[i] = i+1;
	}
	srand(time(0));

	for (int w = 0; w < 20; w++)
	{
		int target = rand() % 20;
		int work=0;
		work = data[w];
		data[w] = data[target];
		data[target] = work;
	}
	for (int k = 0; k < 20; k++)
	{
		printf("%d  ", data[k]);
	}
}