#include<stdio.h>
void connect(char* str1, char* str2);
main()
{
	char str1[256], str2[256];
	printf("”z—ña:");
	gets(str1);
	printf("”z—ñb:");
	gets(str2);
	connect(str1, str2);

	printf("%s", str1);
}

void connect(char* str1, char* str2)
{
	int i, j;
	for ( i = 0; *(str1 + i) != '\0'; i++);
	for (j = 0; *(str1 + i) = *(str2 + j); j++, i++);
	return;
	
}