#include<stdio.h>
main()
{
	int typein;
	char day[7][10] = { "sunday","monday" ,"tuesday" ,"wednesday" ,"thursday" ,"friday" ,"saturday" };
	printf("”’l‚ÍH(0-6)");
	scanf("%d", &typein);
	switch (typein)
	{
		case 1:
			puts(day[1]);
			break;
		case 2:
			puts(day[2]);
			break;
		case 3:
			puts(day[3]);
			break;
		case 4:
			puts(day[4]);
			break;
		case 5:
			puts(day[5]);
			break;
		case 6:
			puts(day[6]);
			break;
		case 0:
			puts(day[0]);
			break;
	}
	
	
}