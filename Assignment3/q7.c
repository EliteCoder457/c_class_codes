//Calculate the sum of digits of a given integer.
#include <stdio.h>
int main(){
int n,sum=0,d;
printf("enter the integer: ");
scanf("%d",&n);
while(n>0){
    d=n%10;
    sum+=d;
    n=n/10;

}
printf("sum of digits is: %d",sum);
    return 0;
}