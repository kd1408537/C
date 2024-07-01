#include<stdio.h>
main()
{
	char data[256];
	printf("•¶š—ñ‚ÍH");
	scanf("%s", data);
	printf("•¶š—ñ@%s\n", data);
	int i = 0;
	while (data[i] != '\0') {
		i++;
	}
	
	printf("•¶š”@%d•¶š",i);
	
}