#include<stdio.h>
void Str_reverse(char* s1, char* s2);
main()
{
	char moji[256];
	char new_moji[256];
	printf("•¶Žš—ñH:");
	gets(moji);
	Str_reverse(moji, new_moji);
	printf("%s", new_moji);
}

void Str_reverse(char*s1, char*s2)
{
	int i, j;
	for (i = 0; *(s1 + i) != '\0'; i++);
	for (i--, j = 0; i >= 0;i--, j++)
	{
		*(s2 + j) = *(s1 + i);
	}
	*(s2 + j) = '\0';
}