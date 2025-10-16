#include <stdio.h>
int factorial(int x ){
    int fact=1;
    for(int i=1 ; i<=x ; i++ ){
    fact = fact*i;
    }
    return fact;
}
 
int permutation(int x ,int y){
    int permut = x/y;
    return permut;
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int r;
    printf("Enter r: ");
    scanf("%d",&r);
    int nfact= factorial(n);
    int rfact= factorial(r);
    int per = permutation(nfact,rfact);
    printf("%d",per);
    return 0;
}