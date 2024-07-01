#include<stdio.h>
main()
{
	int counter,num,sum=0;

	
	
	
		printf("数は？\n");
		scanf("%d", &num);
	for ( sum=0 ,counter=0;num!=-999 ;counter++)
	{	
		
		
		sum += num;
		printf("数は？\n");
		scanf("%d", &num);
		
	}
	
	printf("合計：%d\t平均：%.2f",sum,(float)sum/counter );
}