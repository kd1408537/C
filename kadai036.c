#include<stdio.h>
main()
{
	int num, num2;
	printf("“ñ‚Â‚ÌÀ”H\n");
	scanf("%d%d", &num, &num2);
	if (num > num2)
	{
		printf("%d‚Ì•ûƒK%d‚æ‚è%d‘å‚«‚¢\n", num,num2,num-num2);
	}
	else if (num2 > num)
	{
		printf("%d‚Ì•ûƒK%d‚æ‚è%d¬‚³‚¢\n", num, num2, num2-num);
	}
	else
	{
		printf("%d‚Ì‚Æ%d“™‚µ‚¢\n", num, num2, num - num2);
	}

}