#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu;

	srand(time(0));
	printf("�\�A���I�I�I\n");
	for (int i = 0; i < 10; i++) 
	{
		int a = rand();
		kazu = rand() % 100 + 1;
		if (kazu < 31)
		{
			printf("��S�̈ꌂ�ł�%d\n", kazu);
		}
		else
		{
			printf("���ʂł�%d\n", kazu);

		}
	}
	
	
}