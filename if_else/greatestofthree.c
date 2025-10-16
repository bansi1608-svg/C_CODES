#include<stdio.h>
int main () {
    int a , b , c ;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("The first number %d is greatest",a);
     }
    if(b>a && b>c ){
        printf("The second number %d is greatest",b);
    }
    if(c>a && c>b) {
        printf("The third number %d is greatest",c);
    }
    
    return 0;
}