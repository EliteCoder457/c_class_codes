//Compute a^b (a raised to the power b).

#include <stdio.h>
int main(){
int a,b;
long long result=1;
printf("enter the value of a: ");
scanf("%d",&a);
printf("enter the value of b: ");
scanf("%d",&b);
for(int i=1;i<=b;i++){
    result*=a;
}
printf("result: %d",result);

    return 0;
}