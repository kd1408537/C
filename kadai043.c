#include<stdio.h>
main()
{	
	int a;
	while (a != -1)
	{
		printf("文字コート（-1で入力終了）\n");
		scanf("%d", &a);
		char b = (char)a;
		printf("%c\n",b);
		
	}
	return 0;
}