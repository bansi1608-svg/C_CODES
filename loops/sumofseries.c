//1-2+3-4+5....upto n terms
#include <stdio.h>
int main(){
    // int n,sum=0,i=0;
    // printf("Enter number of terms: ");
    // scanf("%d",&n);
    // while(i<=n){
    //     if(i%2==0){
    //         sum=sum-i;
    //     }
    //     else{
    //         sum=sum+i;
    //     }
    //     i++;
    int n,sum=0;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%2==0){
            sum=-(n/2);
        }
        else{
            sum=-(n-1)/2 + n ;
        }
    }
    printf("The sum of series is %d",sum);
    return 0;
    }
    
