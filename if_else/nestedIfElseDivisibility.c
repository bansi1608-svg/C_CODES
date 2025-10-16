#include <stdio.h>
int main () {
    int x ;
    printf("Enter a Number: ");
    scanf("%d",&x);
    if( x%3==0 || x%5==0){    // preference: && > ||
        if(x%3==0 && x%5==0){     // we can also write if((x%3==0 || x%5==0) && x%15!=0)
            printf("Divisible by 15");
        }
        else{
            printf("Divisible by 3 or 5");
        }
    }
    else {
        printf("Not divisible by 15");
    }
    return 0;
}