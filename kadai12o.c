#include<stdio.h>
#include<string.h>
main()
{
    char* p = "pointer test program";
    char save[256];

    
    strcpy(save, p);

    
    printf("save[]= %s\n", save);

   
    
}
