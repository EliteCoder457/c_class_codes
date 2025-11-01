#include <stdio.h>
int evenodd(int a){

if (a%2==0){
    return 1;}
else {
    return 0;
}
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (evenodd(num))
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);

    return 0;
}

