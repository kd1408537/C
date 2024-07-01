#include<stdio.h>
main()
{
	int max=0,min=0,data[10] = { 10,9,,1,20,45,21,38,45,88 };
	int* p_data;
	p_data = data;
	while (*p_data)
	{
		printf("%d ", *p_data);
		p_data++;
	}
	
}