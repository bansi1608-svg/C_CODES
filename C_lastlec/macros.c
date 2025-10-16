#include <stdio.h>
#define pi 3.14159265359
float area(float r){
    return pi*r*r;
}
int main (){
    printf("%.11f\n",pi);

    double x = 2.173172877298288; // double stores till 15 decimal places
    printf("%.15f\n",x);

    area(21);
    printf("%f",area(21));


    return 0;
}