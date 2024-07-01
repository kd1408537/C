#include<stdio.h>
main()
{
	char moji;
	
	printf("文字を入力する\n");
	scanf("%c", &moji);
	

	if (moji>='A' && moji<='Z')
	{
		printf("大文字");

	}
	else
	{
		printf("その他");
	}
}