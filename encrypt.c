#include<stdio.h>
main()
{
	char input[99];
	printf("文字列を入力してください");
	scanf("%s",input);
	int i = 0;
	while (input[i] != '\0')
	{
		input[i] = input[i] + 1;
		i++;
	}
	printf("%s", input);
}