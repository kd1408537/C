#include<stdio.h>
main()
{

	char data[]="language";
	char *p_data;
	p_data = data;
	char type;
	int flg = 1;
	printf("ŒŸõ•¶š‚Í");
	scanf("%c", &type);
	for (int i = 0; *(p_data + i) != '\0'; i++)
	{
		if (*(p_data+i)==type)
		{
			printf("% d", i + 1);
			flg = 1;
		}
		else
		{
			flg = 0;
		}
	}
	if (flg == 1)
	{
		printf("•¶š–Ú‚Å‚·\n");
	}
	else
	{
		printf("can't find");
	}
}