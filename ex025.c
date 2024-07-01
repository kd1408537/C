#include<stdio.h>
main()
{
	char moji;
	
	printf("1文字を入力する\n");
	scanf("%c", &moji);
	
	
	if ((moji>='A' && moji<='Z')||(moji>='a'&&moji<='z'))
	{
		printf("スルファベト\n");

	}
	else if (moji >= '0' && moji <= '9')
	{
		printf("数字\n");
	}
	else
	{
		printf("その他\n");
	} 
}