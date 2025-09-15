#include <stdio.h>
int main(){
int a,b;
printf("Enter 2 numbers: ");
scanf("%d %d",&a,&b);
if(a^b){
    printf("numbers are not same");
}
else{
    printf("numbers are same");
}
    return 0;
}