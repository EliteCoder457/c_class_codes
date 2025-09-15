#include <stdio.h>
int main(){
float w,h,bmi;
printf("Enter your weight(kgs): ");
scanf("%f",&w);
printf("Enter your height(mts): ");
scanf("%f",&h);
bmi=w/(h*h);
if (bmi<15){
    printf("starvation");
}
else if(15.1<=bmi<=17.5){
    printf("Anorexic");
}
else if(17.6<=bmi<=18.5){
    printf("Underweight");
}
else if(18.6<=bmi<=24.9){
    printf("Ideal");
}
else if(25<=bmi<=25.9){
    printf("Overweight");
}
else if(30<=bmi<=30.9){
    printf("Obese");
}
else{
    printf("Morbidity obese");
}


    return 0;
}