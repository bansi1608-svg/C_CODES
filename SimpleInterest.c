#include <stdio.h>
int main() {
    float p,r,t,SI;
    printf("Enter p :");
    scanf("%f",&p);
    printf("Enter r :");
    scanf("%f",&r);
    printf("Enter t :");
    scanf("%f",&t);   
    SI = (p*r*t)/100;
    printf("The simple interest is given as : %f",SI);

    return 0;
}