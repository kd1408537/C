#include<stdio.h>
main()
{
	int counter=0,num;
	
	printf("数は？\n");
	scanf("%d", &num);
	
	do //何列
	{
		int counter_blank = 0;
		

		do//空白の部分
		{
			printf(" ");
			counter_blank++;
		} while (counter_blank <= num - counter);
		
		
		int counter_star = 0;
		
		do//星の部分
		{
			printf("*");
			counter_star++;
		} while (counter_star<=counter);
		
		printf("\n");
		counter++;

	} while (counter<=num);

}
/*#include <stdio.h>

	int main() {
    int num;
    printf("数を入力してください: ");
    scanf("%d", &num);

    // パターンの出力
    for (int i = 1; i <= num; i++) {
        // スペースの出力
        for (int j = 1; j <= num - i; j++) {
            printf(" ");
        }
        // *の出力
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }

    
*/