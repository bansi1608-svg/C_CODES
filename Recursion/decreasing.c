#include <stdio.h>
void decreasing(int n){
    if(n==0) return; // base case
    printf("%d ",n);
    return decreasing(n-1);
}
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}