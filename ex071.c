#include<stdio.h>
int sum(int a, int b, int c);
float average(int a, int b, int c);
main()
{
	int a, b, c;
	printf("�������O���͂���\n");
	scanf("%d%d%d",&a,&b,&c);
	
	printf("���v%d  ����%.2f", sum(a, b, c), average(a, b, c));

}
int sum(int a, int b, int c)
{
	return (a + b + c);
}
float average(int a, int b, int c)
{
	return (float)(a + b + c) / 3;
}