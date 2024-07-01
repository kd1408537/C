#include<stdio.h>
main()
{	
	char c;
	printf("アルファベット\n");
	scanf("%c", &c);
	switch (c)
	{
	case 'a':
	case 'A':
		printf("America\nAustralia");

		break;
	case 'e':
	case'E':
		printf("England");

		break;
	case'f':
	case'F':
		printf("France");

		break;
	case 'j':
	case'J':
		printf("Japan");

		break;
	
	}
}