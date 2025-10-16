#include <stdio.h>
void decreasing (int n){
    if(n==0) return;
    printf("%d\n",n);
    return decreasing(n-1);
}

void increasing (int n){
    if(n==0) return;
    increasing(n-1);
    printf("%d\n",n);
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    decreasing(n);
    increasing(n);
    return 0;
}