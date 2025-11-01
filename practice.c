#include <stdio.h>
int main(){
int n;
float sum=0.0;
printf("enter a number: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    sum+=(float) (2*i)/(4*i-1);
}

printf("Approximate sum is: %0.2f ",sum);
    return 0;
}