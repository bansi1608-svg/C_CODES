#include <stdio.h>
int main(){
    int n,r=0,l;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        l=n%10; 
        n=n/10;
        r=r*10;
        r=r+l;
    }
    printf("The reverse number is %d",r);
    return 0;
}