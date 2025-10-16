#include <stdio.h>
int main(){
    int n,sum,l,r=0,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    i=n;
    while(n>0){
    l=n%10;
    n=n/10;
    r=r*10;
    r=r+l;
    }
    sum=i+r;
    printf("The sum of the number and it's reverse number is %d",sum);
    return 0;
}