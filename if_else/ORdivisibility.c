#include <stdio.h>
int main() {
    int q;
    printf("Enter a Number:");
    scanf("%d",&q);
    if(q%3==0 || q%5==0){
        printf("The number is divisible by 3 or 5");
    }
    else {
        printf("The number is not divisible by 3 or 5");
    }
    return 0;
}