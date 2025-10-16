#include <stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%3d",&n);
    for(int i=0 ; i<=n ; i++){
        int first = 1; // when j=0 the value is 1 in the box
        for(int k=1 ; k<=n-i ; k++){
            printf("  ");
        }
        for(int j=0; j<=i ; j++){// j will hve values between 0 and i
           printf("%3d ",first); 
           first = first * (i-j)/(j+1); // nCr+1 = nCr * (n-r)/r+1
            
        }
        printf("\n");
    }
    return 0;
}