#include<stdio.h>
main()
{
	char data[256];
	printf("文字列は？");
	scanf("%s", data);
	printf("文字列　%s\n", data);
	int i = 0;
	while (data[i] != '\0') {
		i++;
	}
	
	printf("文字数　%d文字",i);
	
}