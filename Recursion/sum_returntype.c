#include <stdio.h>
int sum(int n){
    if(n==1 || n==0 )return n;
int SUM = n + sum(n-1);
return SUM;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int x = sum(n);
    printf("%d",x);
    return 0;
}