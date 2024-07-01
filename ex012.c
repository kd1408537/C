#include<stdio.h>
main()
{
	char moji1,moji2;
	moji1 = 'A';
	moji2 = moji1 + 0x20;
	printf("moji:%c\n小文字に変換:%c\n", moji1, moji2);
	
}