#include <stdio.h>
int fact(int n){
    if(n==0) return 1;
    if(n==1) return 1; // base case
    return n*fact(n-1);
}
int  main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int factorial = fact(n);
    printf("%d",factorial);
    return 0;
} 