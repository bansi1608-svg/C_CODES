#include <stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1 ; i<=x ; i++){
        fact=fact*i;
       }
    return fact;
}

int combination(int x , int y , int z){
   int comb= x/(y*z);
   return comb;
}
 int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int r;
    printf("Enter r: ");
    scanf("%d",&r);
    
    int nfact = factorial(n); //n!
    int rfact = factorial(r); //r!
    int nrfact = factorial(n-r); // (n-r)!
     
    int comb = combination(nfact,rfact,nrfact);

    printf("%d",comb);
    return 0;
}