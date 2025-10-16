#include <stdio.h>
int main(){
    int sum=0,n,l;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        l=n%10;
        n=n/10;
        if(l%2==0){
            sum=sum+l;
        }
        else{
            continue;
        }

    }
    printf("The sum of even digits is %d",sum);
    return 0;
}