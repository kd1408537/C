#include<stdio.h>
main()
{
	double data[5] = { 10.8,20.3,30.6,40.4,50.5 };
	double* p_data;
	p_data = data;
	double sum = 0, avg = 0;
	for(int i=0;i<5;i++)
	{
		sum += *p_data;
		printf("%f ", *p_data);
		p_data++;
	}
	printf("\n���v=%.3f\n����=%.3f", sum, sum / 5);
}