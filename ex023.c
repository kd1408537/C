#include<stdio.h>
main()
{
	int enter_num,hour,min,sec;
	printf("5000までで入力する");
	scanf("%d", &enter_num);
	if (enter_num <= 5000 && enter_num>=0)
	{
		sec = enter_num % 60;
		min = enter_num / 60;
		hour = min / 60;
		min = min - hour * 60;
		/*hour = enter_num / 3600;
		sec = enter_num % 3600;
		min = sec / 60;
		sec = sec % 60;*/
		printf("%dh %dm %ds", hour, min, sec);
	}
	else
	{
		printf("error");
	}

}