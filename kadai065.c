#include<stdio.h>
main(){
	int sum = 0,counter=0;
	int i;
	do
	{
		printf("�����i-999�ŏI���j");
		scanf("%d", &i);
		if (i == -999)
		{
			break;
		}
		sum += i;
		counter++;
	} while (1);
	printf("���v%d\n",sum);
	printf("����%f", (float)sum/counter);
}