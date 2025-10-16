#include<stdio.h>
int main(){
int a , b , c ;
printf("Enter first number : ");
scanf("%d",&a);
printf("Enter second number : ");
scanf("%d",&b);
printf("Enter third number : ");
scanf("%d",&c);
if(a>b){
    if(a>c){
        printf("%d is greatest",a); // a>b and a>c
    }
    else{
        printf("%d is greatest",c); // c>a>b
}
}
else{ // b>a
    if(b>c){ 
        printf("%d is greatest",b); // b>a and b>c
    }
    else{ // c>b>a
        printf("%d is greatest",c);
    }
}
    return 0;
}