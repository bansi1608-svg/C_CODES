#include <stdio.h>
int main() {
    int count=0,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        n=n/10;
        count++;

    }
    printf("The number of digits are: %d",count);
    return 0;
}