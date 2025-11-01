#include <stdio.h>

int main()
{
    int a = 10;  
    printf("In main block: a = %d\n", a);
    {   
        int b = 20;  
        printf("In inner block 1: a = %d, b = %d\n", a, b);
    } 
      
    {   
        int c = 30;
        printf("In inner block 2: a = %d, c = %d\n", a, c);
    }   

    printf("\nOutside inner blocks: a = %d\n", a); 

    return 0;
}
