#include<stdio.h>
main()
{
	char input[99];
	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%s",input);
	int i = 0;
	while (input[i] != '\0')
	{
		input[i] = input[i] - 1;
		i++;
	}
	printf("%s", input);
}