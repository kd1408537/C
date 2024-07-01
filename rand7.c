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
		
		printf("1-1000‚Ì”’†‚Å“–‚½‚è‚Ì”‚ğ—\‘z‚µ‚Ä‚­‚¾‚³‚¢\n");
		scanf("%d",&player);
		
		if (kazu>player)
		{
			printf("“–‚½‚è‚Ì”‚æ‚è¬‚³‚¢‚Å‚·\n");
		}
		else if (kazu < player)
		{
			printf("“–‚½‚è‚Ì”‚æ‚è‘å‚«‚¢‚Å‚·\n");
		}
		else
		{
			break;
		}

	}
	printf("³‰ğI%d‰ñ–Ú‚Å“–‚½‚è‚Ü‚µ‚½B\n",counter);
}