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
		
		printf("1-1000の数中で当たりの数を予想してください\n");
		scanf("%d",&player);
		
		if (kazu>player)
		{
			printf("当たりの数より小さいです\n");
		}
		else if (kazu < player)
		{
			printf("当たりの数より大きいです\n");
		}
		else
		{
			break;
		}

	}
	printf("正解！%d回目で当たりました。\n",counter);
}