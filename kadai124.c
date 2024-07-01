#include<stdio.h>
main()
{
	char c;
	char* c_p;
	c_p = &c;
	printf("1•¶Žš“ü—Í");
	scanf("%c", &c);

	printf("ŽŸ‚Ì•¶Žš%c", *c_p+0x1);
}