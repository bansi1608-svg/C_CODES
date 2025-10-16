#include <stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1 ; i<=x ; i++){
        fact= fact*i;
    }
    return fact;
}
int combination(int y, int z ){
    
    int comb = factorial(y)/ ( factorial(z) * factorial(y-z)) ;
    return comb;
}
// In pascal traingle, value of each block is equal to i C j where i is ith row and j is jth column
int main(){
     int n;
     printf("Enter n :");
     scanf("%3d",&n);

     for(int i=0 ; i<=n ; i++){
        for(int k=1 ; k <=n-i ; k++){
            printf("  ");
        }
        for(int j=0 ; j<=i ; j++){
            int icj = combination(i,j);

            printf("%3d ",icj );
        }
        printf("\n");
     }

    
    
    

    return 0;
}