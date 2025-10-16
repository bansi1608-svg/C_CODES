#include <stdio.h>

int isprime(int n){ 
    if(n<2) return 0; // return 0 = code is executed successfully

    for(int i=2 ; i*i <=n ; i++){ 
        if(n%i==0) return 0;
    }
    return 1; // return 1 = something went wrong = error
}

void prime_factors(int n){
    printf("Prime factors of %d are : ",n);
    for(int i=2; i<=n ; i++){
        if(n%i==0 && isprime(i)){
            printf("%d ",i);
        }
    }
    printf("\n");
    return;
}


int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    prime_factors(num);
    return 0;
}