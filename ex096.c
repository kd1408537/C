#include<stdio.h>
struct syohin_data
{
	char name[20];
	int tanka;
};
void display3(int* p);
main()
{
	int a = 10;
	struct  syohin_data syohin = { "�P�V�S��",50 };
	display3(&syohin.tanka);
}
void display3(int* p)
{
	printf("�����S��%d\n", * p);
}