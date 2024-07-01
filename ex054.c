#include<stdio.h>
main()
{
	int itbl[3] = { 10,20,30 };
	int* p_itbl;
	double dtbl[3] = { 10.0, 20.0, 30, };
	double* p_dtbl;

	p_itbl =itbl;
	printf("*p_itbl=%d ", *p_itbl);
	p_itbl++;
	printf("*p_itbl=%d ", *p_itbl);
	p_itbl++;
	printf("*p_itbl=%d ", *p_itbl);


	p_dtbl = dtbl;
	printf("*p_dtbl=%.1f ", *p_dtbl);
	p_dtbl++;
	printf("*p_dtbl=%.1f ", *p_dtbl);
	p_dtbl++\
	printf("*p_dtbl=%.1f ", *p_dtbl);
}