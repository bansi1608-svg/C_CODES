#include<stdio.h>
int main() {
    int a , b , c ;
    printf("Enter length of first side of triangle:");
    scanf("%d",&a);
    printf("Enter length of second side of triangle:");
    scanf("%d",&b);
    printf("Enter length of third side of triangle:");
    scanf("%d",&c);
    if( a+b > c && b+c >a && c+a >b){
        printf("The triangle exists");
    }  
    else {
        printf("The triangle doesn't exist");
    } 
    return 0;
}