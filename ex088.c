#include<stdio.h>
#include<string.h>
struct syohin_data
{
	char name[20];
	int tanka;
};
main()
{

	struct syohin_data syohin1, syohin2;
	strcpy(syohin1.name, "ƒGƒ“ƒsƒc");
	syohin1.tanka = 30;
	syohin2 = syohin1;
	printf("syohin.name=%s\n", syohin1.name);
	printf("syohin.name=%d\n", syohin1.tanka);
	printf("syohin.name=%s\n", syohin2.name);
	printf("syohin.name=%d\n", syohin2.tanka);

}