#include<stdio.h>
main()
{
	char moji;
	printf("アルファベット小文字？");
	scanf("%c", &moji);
	for (moji; (int)moji <= 0x7A; moji++)
	{
		
		printf("%c ", (char)moji );
	}
}