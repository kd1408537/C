#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu;
	int player;
	srand(time(0));
	printf("何を出しますか\n(1.グー2.チョキ3.パー)＞");
	scanf("%d", &player);
	printf("playerは");
	switch (player)
	{
	case 1:
		printf("グーです\n");
		break;
	case 2:
		printf("チョキです\n");
		break;
	case 3:
		printf("パーです\n");
		break;
	default:
		printf("");
		break;
	}
	int a = rand();
	kazu = rand() % 3 + 1;
	printf("コンプュータは、");
	switch (kazu)
	{
		case 1:
			printf("グー\n");
			break;
		case 2:
			printf("チョキ\n");
			break;
		case 3:
			printf("パー\n");
			break;
		default:
			printf("");
			break;
	}
	
	
	if (player == 1 && kazu == 2 || player == 2 && kazu == 3 || player == 3 && kazu == 1)
	{
		printf("勝ちです");
	}
	else if (player == 1 && kazu == 3 || player == 2 && kazu == 1 || player == 3 && kazu == 2)
	{
		printf("負けです");
	}else
	{
		printf("アイコ");
	}

	
}