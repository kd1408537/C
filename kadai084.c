#include<stdio.h>
main() {
	
	int num1,num2;
	while (1)
	{
		printf("整数（-999で終了）");
		scanf("%d%d", &num1,&num2);
		if (num1 == -999||num2==-999)
		{
			break;
		}
		if (num1 == 0 || num2 == 0)
		{
			continue;
		}
		printf("%d/%d=%dあまり%d\n" ,num1, num2, num1 / num2, num1 % num2);
	}
	
}