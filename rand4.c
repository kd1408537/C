#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu;

	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		int a = rand();
		kazu = rand() % 5 + 1;
		printf("今日のあなたの運勢は、");
		while (kazu != 0)
		{
			printf("★");
			kazu--;
		}
		printf("  です。\n");
	}
}