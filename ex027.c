#include<stdio.h>
main()
{
	char moji;

	printf("文字を入力する\n");
	scanf("%c", &moji);
	

	if ((moji >= 'A' && moji <= 'Z') || (moji >= 'a' && moji <= 'z'))
	{
		if (moji >= 'A' && moji <= 'Z')
		{
			moji = moji + 0x20;
			printf("変換すると%c\n", moji);
		}
		else
		{
			moji = moji - 0x20;
			printf("変換すると%c\n", moji);
		}
	}
	else
	{
		printf("error\n");
	}
}