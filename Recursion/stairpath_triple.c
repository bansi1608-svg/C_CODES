#include <stdio.h>


int stair(int n){
      if(n==1 || n==2) return n;
      if(n==3) return 4;
        int ans= stair(n-1) + stair(n-2) + stair(n-3);
        return ans;
    }


int main(){
    int n;
    printf("Enter the number of stairs: ");
    scanf("%d",&n);
    int x = stair(n);
    printf("%d",x);
    return 0;
}