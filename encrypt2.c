#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char input[21];
	int encodenum[20];
	
	
	printf("•¶Žš—ñ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf("%s",input);
	int i = 0;
	srand(time(0));
	while (input[i] != '\0')
	{
		encodenum[i] = rand() % 6;
		//printf("%d",encodenum[i]);
		input[i] = encodenum[i] + input[i];
		i++;
	}
	printf("%s\n", input);
	int n = 0;
	while (n<i)
	{
		printf("%d", encodenum[n]);
		n++;
	}
	
	
}