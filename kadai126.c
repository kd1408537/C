#include<stdio.h>
main()
{
	int max = 0, min = 0, data[10] = { 10,9,1,20,45,21,38,45,88 };
	int* p_data;
	p_data = data;
	max = *p_data;
	min = *p_data;
	while (*p_data)
	{
		printf("%d ", *p_data);
		if (*p_data>max)
		{
			max = *p_data;
		}
		if (*p_data < min)
		{
			min = *p_data;
		}		
		p_data++;
	}
	printf("\nÅ‘å’l=%d\nÅ¬’l=%d", max, min);
}