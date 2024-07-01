#include<stdio.h>
main()
{
	int num1, num2, num3, sum = 0;
	char syori;
	
	printf("処理を入力(d,s,g,h)");
	scanf("%c", &syori);
	
	printf("整数を入力");
	scanf("%d%d%d", &num1, &num2, &num3);
	
	switch (syori)
	{
	case 'd':
	case 'D':
		/*if (num1>num2 && num1>num3)
		{
			printf("最大値%d", num1);
		}
		else if (num2>num3&&num2>num3)
		{
			printf("最大値%d", num2);
		}else
		{
			printf("最大値%d", num3);
		}
		break;*/
		int s;
		s = num1;
		if(num2>s)
		{
			s = num2;
		}
		if(num3>s )
		{
			s = num3;
		}
		printf("最大値は%dです。", s);
		break;
	case 's':
	case 'S':
		/*if (num1 > num2 && num2 > num3)
		{
			printf("最小値%d", num3);
		}
		else if (num1 > num3 && num2 > num1)
		{
			printf("最小値%d", num3);
		}
		else
		{
			printf("最小値%d", num2);
		}
		break;*/
		
		s = num1;
		if (s > num2)
		{
			s = num2;
		}
		if(s>num3)
		{
			s = num3;
		}
		printf("最小値は%dです。", s);
		break;
	case 'g':
	case 'G':
		printf("和は%d", num1 + num2 + num3);
		break;
	
	case'h':
	case 'H':
		printf("平均は%.2f", (float)(num1 + num2 + num3) / 3);
		break;
	
	default:
		printf("ERROR");
		break;
	}
}