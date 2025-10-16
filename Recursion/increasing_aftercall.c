#include <stdio.h>
void increasing(int n){
    if(n==0) return; // base case
    increasing(n-1);
    printf("%d ",n);
}
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    increasing(n);
    return 0;
}