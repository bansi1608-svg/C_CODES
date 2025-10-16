#include <stdio.h>
void increasing(int x,int n){
    if(x>n) return; // base case
    printf("%d ",x);
    return increasing(x+1,n);
}
int main() {
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    increasing(1 , n);
    return 0;
}