#include <stdio.h>
int main(){
    int a;
    printf("Enter a :");
    scanf("%d",&a);
    int b;
    printf("Enter b :");
    scanf("%d",&b);
    int t; // t= temporary storage number
    t=a;
    a=b;
    b=t;
    printf("The value of a is %d\n",a);
    printf("The value of b is %d",b);
    return 0;
}