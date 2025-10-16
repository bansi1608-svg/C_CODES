#include <stdio.h>
int main() {
    int a , b , k ;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter the digit: ");
    scanf("%d",&b);
    k=0;
    if(a==0 && b==0){
        printf("1");

    }
    else{
    while(a>0){
        if(a%10==b){
            k++;
        }
        a=a/10;
    }
    printf("%d",k);
}
    return 0;
}