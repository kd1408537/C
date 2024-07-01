#include<stdio.h>
main()
{
	char data[15] = "c language";
	char data2[15];
	char* p_data, * p_data2;
	
	p_data = data;
	p_data2 = data2;
	
	printf("data=[]=%s\n", p_data);
	
	while (*p_data2++ = *p_data++);
	p_data2 = data2;
	printf("data2=[]=%s\n", data2);
	
	while (*p_data2)
	{
		putchar(*p_data2++);
	}
	
	putchar('\n');
}