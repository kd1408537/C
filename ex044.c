#include<stdio.h>
#include<string.h>
main()
{

	char str1[50], str2[50],str3[50];
	
	printf("文字列1を入力:");
	scanf("%s", str1);
	printf("文字列2を入力:");
	scanf("%s", str2);
	
	printf("moji1=%s  moji2=%s\n", str1, str2);

	/*strcpy(str3, str2);
	strcpy(str2, str1);
	strcpy(str1, str3);*/
	
	int i = 0, k = 0, j = 0;
	for (i = 0; str3[i] = str1[i]; i++);
	for (j = 0; str1[j] = str2[j]; j++);
	for (k = 0; str2[k] = str3[k]; k++);
	/*for (i = 0; str1[i] != '\0'; i++)
	{
		str3[i] = str1[i];
	}
	str3[i] = '\0';
	for (j = 0; str2[j] != '\0'; j++)
	{
		str1[j] = str2[j];
	}
	str1[j] = '\0';
	for (k = 0; str3[k] != '\0'; k++)
	{
		str2[k] = str3[k];
	}
	str2[k] = '\0';*/
	
	printf("入れ替わえると\n");
	printf("moji1=%s  moji2=%s", str1, str2);
}