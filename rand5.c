#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu;

	srand(time(0));
	for (int i = 0; i < 100; i++)
	{
		int a = rand();
		kazu = rand() % 300 + 1;
		printf("%d\n",kazu);
	}
}