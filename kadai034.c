#include<stdio.h.>
main()
{
	char monji;
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &monji);
	if (monji >= 'a' && monji <= 'z')
	{
		printf("�������ł�");

	}
	else if (monji >= 'A' && monji <= 'Z')
	{
		printf("�啶���ł�");
	}
	else
	{
		printf("error");
	} 
}