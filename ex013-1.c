#include<stdio.h>
main()
{
	char moji1,moji2;
	moji1 = '5';
	moji2 = '6';
	char sum=(moji1 - 0x30)* (moji2 - 0x30);
	printf("%c*%c=%d\n", moji1,moji2,sum);
	
}