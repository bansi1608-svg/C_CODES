#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1; i<=n ; i++)//Number of lines
    {
        for(int j=1 ; j<=n-i ; j++){
            // i+j=n -> j=n-i
        printf(" ");// Number of space
        }
        
        for(int k=1;k<=i;k++){// Number of stars in a line
        printf("*");
        }

        printf("\n");
    }
    return 0;
}