#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1 ; i<=2*n - 1 ; i++){
        for(int j = 1 ; j<=2*n -1 ; j++){
        int min = 0;
        int a=i;
        if(i>n){
            a=2*n-i;
        }
        int b=j;
        if(j>n){
            b=2*n-j;
        }
        
        if(a<b) min=a;
        else min = b;
        printf("%d",n+ 1 - min) ; // to swap values = we will print n+1-min
       ;
    }
    printf("\n");
    }
    return 0;
}