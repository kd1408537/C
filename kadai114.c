#include<stdio.h>
main()
{
	char data[256];
	printf("������́H");
	scanf("%s", data);
	printf("������@%s\n", data);
	int i = 0;
	while (data[i] != '\0') {
		i++;
	}
	
	printf("�������@%d����",i);
	
}