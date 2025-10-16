#include <stdio.h>
int fact(int a){
    int nfact=1;
    for(int i=1; i<=a; i++){
     nfact=nfact*i;
    }
    return nfact;
}

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int nfact = fact(n);
    printf("The n! of the given number is %d",nfact);
    return 0;
}