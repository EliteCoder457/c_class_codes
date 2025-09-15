#include <stdio.h>
int main(){
unsigned int x1,y1,x2,y2,x3,y3;
printf("enter the value of x1, y1: ");
scanf("%d %d",&x1,&y1);
printf("enter the value of x2, y2: ");
scanf("%d %d",&x2,&y2);
printf("enter the value of x3, y3: ");
scanf("%d %d",&x3,&y3);
int area=(x2*y3-y2*x3)-(x1*y3-x3*y1)+(x1*y2-x2*y1);
if (area==0){
    printf("collinear");
}
else{
    printf("not collinear");
}
    return 0;
}