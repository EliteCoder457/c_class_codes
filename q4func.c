#include <stdio.h>
int maxormin(int a, int b){
if (a>b){
    return a;}
else{
    return b;
}
}

int main(){
int result = maxormin(5, 6);  
    printf("The maximum number is: %d\n", result);
    return 0;
}