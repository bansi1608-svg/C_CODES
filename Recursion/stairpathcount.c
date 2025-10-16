#include <stdio.h>
// Number of ways to climb the stairs
int stair(int n){
    if(n==1 || n==2) return n;
    int ans = stair(n-1) + stair(n-2);
    return ans;
}
int main(){
    int n;
    printf("Enter number of stairs: ");
    scanf("%d",&n);
    int ways = stair(n);
    printf("The number of ways to climb the stairs is %d",ways);
    return 0;
}