#include <stdio.h>
int globalVar = 10;

void display()
{
    int localVar = 5;
    printf("inside display():\n");
    printf("Local variable = %d\n", localVar);
    printf("Global variable = %d\n", globalVar);
}

int main()
{
    display();

    printf("\nInside main():\n");
    printf("Global variable = %d\n", globalVar); 
    return 0;
}
