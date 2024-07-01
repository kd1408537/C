#include<stdio.h>
main()
{
	char moji;
	
	int count = 0;
		for (moji = 32; (int)moji <= 126; moji++)
		{
			if (count%10==0)
			{
				printf("\n");
			}
			printf("%x", (int)moji);
			printf("%c ", (char)moji );
			count++;
		}
		
	
}