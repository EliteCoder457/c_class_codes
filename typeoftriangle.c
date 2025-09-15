#include <stdio.h>
int main(){
float a,b,c;
printf("Enter length of side a: ");
scanf("%d",&a);
printf("Enter length of side b: ");
scanf("%d",&b);
printf("Enter length of side c: ");
scanf("%d",&c);
if (a + b > c && a + c > b && b + c > a) {
    printf("The given sides form a valid triangle.\n");


if (a==b && b==c){
    printf("the traingle is equilateral");

}
 
else if (a==b || b==c || c==a){

printf("the triangle is isosceles");
}
else if (a*a + b*b== c*c || a*a+ c*c == b*b|| c*c +b*b == a*a){
    printf("the triangle is right angled");
}
else{
    printf("the triangle is scalene");
}
}
else{
    printf("a triangle cannot be formed");
}

    return 0;
}