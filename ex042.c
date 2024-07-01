#include<stdio.h>
main()
{
	//char apple[6]="Apple";
	char apple[] = "Apple";
	printf("1文字ずつ表示\n");
	/*for (int i = 0; i < 5; i++)
	{
		printf("%c", apple[i]);
	}*/
	int i=0;
	while (apple[i]!='\0')
	{
		printf("%c", apple[i]);
		i++;
	}
	
	printf("\n文字列で表示\n%s",&apple[0]);
	
	
}