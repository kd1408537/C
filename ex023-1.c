#include<stdio.h>
main()
{
	int enter_num, hour, min, sec;//入力　時　分　秒
	
	printf("5000までで入力する");
	scanf("%d", &enter_num);
	
	if (enter_num >= 0)
	{
		if (enter_num <= 5000 /* && enter_num >= 0 */ )//5000以上やマイナスを入力したら
		{
			sec = enter_num % 60;
			min = enter_num / 60;
			hour = min / 60;
			min = min - hour * 60;
			/*hour = enter_num / 3600;　先生の方法
			sec = enter_num % 3600;
			min = sec / 60;
			sec = sec % 60;*/
			printf("%dh %dm %ds", hour, min, sec);
		}
		else
		{
			printf("error,num must smaller than 5000 ");
		}

	}
	else
	{
		printf("error,num must be postive");
	}
	
}