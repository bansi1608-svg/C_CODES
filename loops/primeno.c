#include <stdio.h>
int main () {
    int B, K=0;
    printf("Enter a Number : ");
    scanf("%d",&B);
    for(int i=2 ; i<=B-1 ; i=i+1){
        if(B%i==0){// B is divisible by i
            K=7;
            break; // it stops the loop here when condition is true
        }
    }
    if(B==1){ 
        printf("The number is neither prime nor composite");}
    else if(K==0){
         printf("The number is prime");}
    else
     printf("The number is composite");
    return 0;
}