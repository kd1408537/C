#include<stdio.h>
main()
{
	char monji;
	printf("アルファベット？");
	scanf("%c", &monji);
	if (monji>='a' && monji<='z')
	{
		printf("小文字です");

	}
	else
	{
		printf("大文字です");
	}
}