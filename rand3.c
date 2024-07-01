#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu;

	srand(time(0));
	printf("十連撃！！！\n");
	for (int i = 0; i < 10; i++) 
	{
		int a = rand();
		kazu = rand() % 100 + 1;
		if (kazu < 31)
		{
			printf("会心の一撃です%d\n", kazu);
		}
		else
		{
			printf("普通です%d\n", kazu);

		}
	}
	
	
}