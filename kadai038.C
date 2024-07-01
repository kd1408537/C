#include<stdio.h.>
main()
{
	char monji,monji2;
	printf("1•¶Žš“ü—Í");
	scanf("%c", &monji);
	if (monji >= 'a' && monji <= 'z')
	{
		monji2 = monji - 0x20;
		printf("%c",monji2);

	}
	else if (monji >= 'A' && monji <= 'Z')
	{
		monji2 = monji + 0x20;
		printf("%c", monji2);
	}
	else
	{
		printf("%c",monji);
	}
}