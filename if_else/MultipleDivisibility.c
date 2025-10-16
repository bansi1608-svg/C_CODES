#include <stdio.h>
int main () {
    int b;
    printf("Enter a Number:");
    scanf("%d",&b);
    if(b%3==0 && b%5==0){
        printf("The number is divisible by 3 and 5 both");
    }
    else{
        printf("The number is not divisible by 3 and 5 both");
    }
    return 0;
}