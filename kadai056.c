#include<stdio.h>
main()
{
	char moji;
	printf("�A���t�@�x�b�g�������H");
	scanf("%c", &moji);
	for (moji; (int)moji <= 0x7A; moji++)
	{
		
		printf("%c ", (char)moji );
	}
}