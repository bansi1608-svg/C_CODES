#include <stdio.h> 
// MULTIPLE CALLS
int fibonacci(int n){
    if(n==1 || n==2) return 1;
    int ans = fibonacci(n-1) + fibonacci(n-2);
    return ans;
}


int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int fib = fibonacci(n);
    printf("%d",fib);
    return 0;
}