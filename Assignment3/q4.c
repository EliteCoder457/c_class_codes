//Find the factorial of a given number
#include <stdio.h>
int main(){
int f=1,n;
printf("enter the number: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    f=f*i;
    
}
printf("%d",f);
    return 0;
}