#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu;
	int player;
	srand(time(0));
	printf("�����o���܂���\n(1.�O�[2.�`���L3.�p�[)��");
	scanf("%d", &player);
	printf("player��");
	switch (player)
	{
	case 1:
		printf("�O�[�ł�\n");
		break;
	case 2:
		printf("�`���L�ł�\n");
		break;
	case 3:
		printf("�p�[�ł�\n");
		break;
	default:
		printf("");
		break;
	}
	int a = rand();
	kazu = rand() % 3 + 1;
	printf("�R���v���[�^�́A");
	switch (kazu)
	{
		case 1:
			printf("�O�[\n");
			break;
		case 2:
			printf("�`���L\n");
			break;
		case 3:
			printf("�p�[\n");
			break;
		default:
			printf("");
			break;
	}
	
	
	if (player == 1 && kazu == 2 || player == 2 && kazu == 3 || player == 3 && kazu == 1)
	{
		printf("�����ł�");
	}
	else if (player == 1 && kazu == 3 || player == 2 && kazu == 1 || player == 3 && kazu == 2)
	{
		printf("�����ł�");
	}else
	{
		printf("�A�C�R");
	}

	
}