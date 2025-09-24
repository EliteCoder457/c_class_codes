//Print the multiplication table of a number entered by the user.
#include <stdio.h>
int main(){
int n,p=1;
printf("enter the number: ");
scanf("%d",&n);
for(int i=1;i<=10;i++){
    p=n*i;
    printf("\n%d",p);
}

    return 0;
}