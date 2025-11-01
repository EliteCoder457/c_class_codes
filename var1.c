#include <stdio.h>

int count =0;
void display();
void increment();
int main(){

    display();
    increment();
    return 0;
}
void display(){
    printf("current count: %d\n",count);
}
void increment(){
    count++;
    printf("After increment: %d \n", count);
}





   
