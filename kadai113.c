#include<stdio.h>
main()
{
	char data[] = "GameSoft";
	printf("文字列　%s\n", data);
	int i = 0;
	while (data[i] != '\0') {
		i++;
	}
	
	printf("文字数　%d文字",i);
	
}