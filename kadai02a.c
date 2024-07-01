#include<stdio.h>
main()
{

	double num,num2;
	printf("“ñ‚Â‚ÌÀ”H");
	scanf("%lf%lf", &num,&num2);
	printf("----%f‚Æ%fl‘¥‰‰Z---\n",num,num2);
	printf("˜a=%.6f\n", num +num2);
	printf("·=%.6f\n", num -num2);
	printf("Ï=%.6f\n", num * num2);
	printf("¤=%.6f", num / num2);
}