#include<stdio.h>
main()
{
	char data[] = "abcde";
	printf("コピー元配列data1[]=\n");
	printf("%s\n", data);
	char data2[256] ;
	int i = 0;
	while (data[i] != '\0') {
		data2[i] = data[i];
		i++;
	}
	data2[i] = '\0';
	printf("コピー先配列data2[]=\n");
	printf("%s\n", data2);
}