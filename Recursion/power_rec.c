#include <stdio.h>

int power(int a , int b){
    if(b==0) return 1; //base case
    int p =  a * power(a, b-1);
    return p;
}

int main(){
    int a;
    printf("Enter base : ");
    scanf("%d",&a);
    int b;
    printf("Enter power : ");
    scanf("%d",&b);
    int p = power(a,b);
    printf("%d raised to %d is %d",a,b,p);

    return 0;
}