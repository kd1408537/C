#include<stdio.h>
main()
{
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* p_data, * p_data2;
	p_data = data;
	p_data2 = data;
	
	printf("ポインタを固定で表示\n");
	for (int i = 0; i < 8; i++)
	{
		printf("%d ", *(p_data+i));
	}
	
	
	
	printf("\nポインタを変化させてで表示\n");
	while (*p_data2!=-999)
	{
		printf("%d ", *p_data2);
		p_data2++;
	}
}