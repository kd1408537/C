#include<stdio.h>
#include<string.h>
void sort(int *data, int num, int order);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	char string[256];
	
	printf("�\�[�g���������:");
	gets(string);
	
	if (strcmp(string, "����")==0)
	{
		sort(data, 8, 0);
	}
	else if(strcmp(string, "�~��") == 0)
	{
		sort(data, 8, 1);
	}
	else
	{
		printf("�\�[�g�����́A�������~���œ��͂��Ă�������\n");
	}
	for (int i = 0; i < 8; i++)
	{
		printf("%d�@�@", data[i]);
	}
}
void sort(int *data, int num, int order)
{
	int i, j, w;
	
	switch (order)
	{
		case 0:
			for (i = 0; i < num - 1; i++)
			{
				for (j = i + 1; j < num;j++)
				{
					if (*(data + i) > *(data + j))
					{
						w = *(data + i);
						*(data + i) = *(data + j);
						*(data + j) = w;
					}
				}
			}
			break;
		case 1:
			for ( i = 0; i < num-1; i++)
			{
				for (j = i + 1; j < num; j++)
				{
					if (*(data + i) < *(data + j))
					{
						w = *(data + i);
						*(data + i) = *(data + j);
						*(data + j) = w;
					}
				}
			}
			break;
	}
}
