#include<stdio.h>
main()
{
	char moji[256];
	int kai;
	printf("回数と文字列を入力");
	scanf("%d%s", &kai, moji);
	for (int i = 0; i < kai; i++)
	{
		printf("\n%s", moji);
	}

}