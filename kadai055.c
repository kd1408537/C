#include<stdio.h>
main()
{
	for (int i = 0; i < 26; i++)
	{
		int moji = 0x41;
		printf("%c ",(char)moji+i);
	}
}