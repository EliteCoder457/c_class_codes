//Check if a given number is prime or not.
#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==0){
        printf("the given number us prime");
    }
    else {
        printf("the given number is composite");
    }
    return 0;
}