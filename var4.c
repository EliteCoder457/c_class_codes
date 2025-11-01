#include <stdio.h>

void counter()
{
    static int count = 0; 
    int normal = 0;       
    count++;
    normal++;
    printf("Static variable: %d, Normal variable: %d\n", count, normal);
}

int main()
{
    printf("First call:\n");
    counter();

    printf("\nSecond call:\n");
    counter();

    printf("\nThird call:\n");
    counter();

    return 0;
}
