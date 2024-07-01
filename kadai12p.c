#include<stdio.h>
main()
{
	char* day[] = {"sunday","monday","tuesday","wednesday","thursday","friday","saturday",NULL};
	
	for (int i = 0; i < 7; i++)
	{
		printf("%s\n", day[i]);

	}
}