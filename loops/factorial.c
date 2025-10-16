//find n! and also print the factorials of first n numbers
#include <stdio.h>
int main(){
    int n,f=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1; i<=n ;i++){
        f=f*i;
        printf("\nThe factorial of %d is %d",i,f);
    }
    printf("\nThe value of n factorial is %d",f);

    return 0;
}