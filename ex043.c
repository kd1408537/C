#include<stdio.h>
#include<string.h>
main()
{
	int count = 0;
	char str1[10] = "orange";
	//count = strlen(str1); //方法1
	
	/* int i=0;
	while (str1[i] != '\0') //while
	{
		count++;
	}*/
	for (count = 0; str1[count] != '\0'; count++);
	
	printf("文字数は%d文字", count);
}