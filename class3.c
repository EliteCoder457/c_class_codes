//arithematic operators on two numbers
#include <stdio.h>
int main(){
float x, y, s, d, m, div;
printf("enter the first number: ");
scanf("%f",&x);
printf("enter the second number: ");
scanf("%f",&y);
s=x+y;
d=x-y;
m=x*y;
div=x/y;
printf("Sum is: %0.2f\n", s);
printf("difference is : %0.2f\n", d);
printf("multiplication is %0.2f\n", m);
printf("division is: %0.2f\n", div);

    return 0;

}