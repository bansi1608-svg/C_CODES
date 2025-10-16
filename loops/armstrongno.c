#include <stdio.h>
int main(){
    int n,l=0,sum=0,og;
    printf("Enter the number:");
    scanf("%d",&n);
    og=n;

    while(n>0){
        l=n%10;
        n=n/10;
        sum= sum + (l*l*l);
        
    }
    if(sum==og){
            printf("The number is an armstrong number");
        }
        else{
            printf("no");
        }
    return 0;
}