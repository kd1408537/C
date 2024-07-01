#include<stdio.h>
int GetMax(int *data,int num);
int GetMin(int* data, int num);
main()
{
	int max, min;
	int data[8] = { 6,10,8,2,9,5,1,7 };
	max=GetMax(data, 8);
	min=GetMin(data, 8);
	printf("Å‘å’l=	%d\nÅ¬’l=%d", max, min);
}

int GetMax(int *data, int num)
{
	int max = *data;
	for (int i = 0; i < num; i++)
	{
		if (*(data+i) > max)
		{
			max = *(data + i);
		}

	}
	return max;
}
int GetMin(int* data, int num)
{
	int min = *data;
	for (int i = 0; i < num; i++)
	{
		if (*(data + i) < min)
		{
			min = *(data + i);
		}

	}
	return min;
}
