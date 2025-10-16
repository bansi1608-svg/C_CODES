#include <stdio.h>
int main() {
    int n, sum=0 ,l;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        l=n%10;
        n=n/10;
        sum=sum+l;
} 
    printf("The sum of digits is %d",sum);
    return 0;
}