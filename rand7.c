#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu;
	int player = 0;
	int counter = 0;
	
	srand(time(0));
	int a = rand();
	kazu = rand() % 1000 + 1;
	
	while(kazu!=0)
	{
		counter++;
		
		printf("1-1000�̐����œ�����̐���\�z���Ă�������\n");
		scanf("%d",&player);
		
		if (kazu>player)
		{
			printf("������̐���菬�����ł�\n");
		}
		else if (kazu < player)
		{
			printf("������̐����傫���ł�\n");
		}
		else
		{
			break;
		}

	}
	printf("�����I%d��ڂœ�����܂����B\n",counter);
}