#include<stdio.h>
void input(int *p_pr,int *p_num);
int count(int price, int num);
void sikaku();
void sikaku_print(int length);
int year_return(int year);
void Jikoku(int hour,int min);
main()
{
	int price, num, sum;
	int* p_pr,*p_num; 
	p_num = &num;
	p_pr = &price;
	printf("1.\n");
	input(p_pr,p_num);
	printf("%d�~�̃����S%d�𔃂���\n", *p_pr, *p_num);
	sum = count(price, num);
	printf("���v%d\n", sum);

	printf("2.\n�ӂ̒��������:");
	sikaku();

	int year=0;
	year=year_return(year);
	printf("3.\n%d�N\n",year);

	int hour, min;
	printf("4.\n���Ԃ����:\n���H");
	scanf("%d",&hour);
	printf("���H");
	scanf("%d", &min);
	Jikoku(hour, min);
}
void input(int *p_pc,int *p_num)
{
	printf("�l�i�����:");
	scanf("%d", p_pc);
	printf("�������:");
	scanf("%d", p_num);
}
int count(int price, int num)
{
	return price * num;
}
void sikaku()
{
	int length;
	scanf("%d", &length);
	sikaku_print(length);
}
void sikaku_print(length)
{
	for (int  i = 0; i < length; i++)
	{
		for (int k = 0; k < length; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int year_return (int year )
{
	year = 2024;
	return year;
}
void Jikoku(int hour, int min)
{
	printf("���Ԃ�%d��%d���ł�", hour, min);
}

