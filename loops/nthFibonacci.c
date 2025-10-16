//fibonacci series: 1,1,2,3,5,8,13,21,34,55,89....
//find nth fibonacci term  and also print first n fibonacci numbers
#include <stdio.h>
int main(){
    int n,a=1,b=1,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("1\n1");
    for(int i=1; i<=n-2 ;i++){
        sum= a+b;
        a=b;
        b=sum;
        
        printf("\n%d",sum);
    }
    printf("\nThe %dth term of fibonacci series is %d",n,sum);


    return 0;

}