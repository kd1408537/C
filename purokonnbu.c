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
	printf("%d円のリンゴ%d個を買った\n", *p_pr, *p_num);
	sum = count(price, num);
	printf("合計%d\n", sum);

	printf("2.\n辺の長さを入力:");
	sikaku();

	int year=0;
	year=year_return(year);
	printf("3.\n%d年\n",year);

	int hour, min;
	printf("4.\n時間を入力:\n時？");
	scanf("%d",&hour);
	printf("分？");
	scanf("%d", &min);
	Jikoku(hour, min);
}
void input(int *p_pc,int *p_num)
{
	printf("値段を入力:");
	scanf("%d", p_pc);
	printf("個数を入力:");
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
	printf("時間は%d時%d分です", hour, min);
}

