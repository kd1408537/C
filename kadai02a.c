#include<stdio.h>
main()
{

	double num,num2;
	printf("��̎����H");
	scanf("%lf%lf", &num,&num2);
	printf("----%f��%f�l�����Z---\n",num,num2);
	printf("�a=%.6f\n", num +num2);
	printf("��=%.6f\n", num -num2);
	printf("��=%.6f\n", num * num2);
	printf("��=%.6f", num / num2);
}