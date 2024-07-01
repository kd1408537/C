#include<stdio.h>
struct syohin_data
{
	char name[20];
	int tanka;
};

void display(int a);
void display2(struct syohin_data syohin);

main()
{
	int a = 10;
	struct syohin_data syohin = { "è¡ÇµÉSÉÄ",50 };
	display(a);
	display2(syohin);
}

void display(int a)
{
	printf("a=%d\n", a);
}

void display2(struct  syohin_data syohin)
{
	printf("syohin.name=%s syohin.tanka=%d\n", syohin.name, syohin.tanka);

}