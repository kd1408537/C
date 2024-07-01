#include<stdio.h>
main()
{
	char day[7][10] = { "sunday","monday" ,"tuesday" ,"wednesday" ,"thursday" ,"friday" ,"saturday" };
	for (int i = 0; i < 7; i++)
	{
		for (int k = 0; day[i][k] !='\0'; k++)
		{
			putchar(day[i][k]);
		}
		putchar('\n');
	}
	
}