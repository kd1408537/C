#include<stdio.h>
enum bitstate
{
	base = 0,
	poison = 1 << 0,
	sleep = 1 << 1,
	paralysis = 1 << 2,
	burn = 1 << 3,
	atkup = 1 << 4,
	atkdown = 1 << 5
};

typedef unsigned int UINT;
void displaystatus(UINT s);
void changeflag(UINT* s);
void clearflag(UINT* s);

main()
{
	UINT MyState = base;
	displaystatus(MyState);
	changeflag(&MyState);
	displaystatus(MyState);
	clearflag(&MyState);
	displaystatus(MyState);
}
void displaystatus(UINT s)
{
	printf("Œ»İ‚Ìó‘Ô----");
	if (s & poison)
	{
		printf("“Å");
	}
	if (s & sleep)
	{
		printf("‡–°");
	}
	if (s & paralysis)
	{
		printf("–ƒáƒ");
	}
	if (s & burn)
	{
		printf("‰Î");
	}
	if (s & atkup)
	{
		printf("UŒ‚up");
	}
	if (s & atkdown)
	{
		printf("UŒ‚down");
	}
	if (s & base)
	{
		printf("’Êí");
	}
	printf("\n*******************\n");

}

void changeflag(UINT* s)
{
	int a;
	while (1)
	{
		printf("‚Ç‚Ìó‘ÔH\n");
		printf("1.“Å2.‡–°3.–ƒáƒ4.‰Î5.UŒ‚up6.UŒ‚down0.I—¹\n");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= poison;
			break;
		case 2:
			*s |= sleep;
			break;
		case 3:
			*s |= paralysis;
			break;
		case 4:
			*s |= burn;
			break;
		case 5:
			*s |= atkup;
			break;
		case 6:
			*s |= atkdown;
			break;
		default:
			break;
		}
	}
}

void clearflag(UINT* s)
{
	int a;
	while (1)
	{
		printf("‚Ç‚Ìó‘Ô‚ğ‰ğœ‚µ‚Ü‚·‚©\n");
		printf("1.“Å2.‡–°3.–ƒáƒ4.‰Î5.UŒ‚up6.UŒ‚down0.I—¹");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s &= ~poison;
			break;
		case 2:
			*s &= ~sleep;
			break;
		case 3:
			*s &= ~paralysis;
			break;
		case 4:
			*s &= ~burn;
			break;
		case 5:
			*s &= ~atkup;
			break;
		case 6:
			*s &= ~atkdown;
			break;

		default:
			break;
		}
	}
}
