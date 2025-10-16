#include <stdio.h>
void greeting(int n){
    if(n==0) return; // base case
    printf("Hello YOU\n");
    return greeting(n-1);
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    greeting(n);
    return 0;
}