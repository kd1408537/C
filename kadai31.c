#include<stdio.h>
main()
{
	float num, num2;
	printf("“ñ‚Â‚ÌŽÀ”H\n");
	scanf("%f%f", &num, &num2);
	if (num > num2)
	{
		printf("‘å‚«‚¢‚Ù‚¤‚Í=%.6f\n", num);
	}
	else if(num2>num)
	{
		printf("‘å‚«‚¢‚Ù‚¤‚Í=%.6f\n", num2);
	}
	else
	{
		printf("same");
	}

}