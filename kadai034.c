#include<stdio.h.>
main()
{
	char monji;
	printf("アルファベット？");
	scanf("%c", &monji);
	if (monji >= 'a' && monji <= 'z')
	{
		printf("小文字です");

	}
	else if (monji >= 'A' && monji <= 'Z')
	{
		printf("大文字です");
	}
	else
	{
		printf("error");
	} 
}