#include <stdio.h>
int main(){
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    int nst = n-1,nsp = 1;
    for(int a=1 ; a<2*n; a++){// first time
         printf("*");
    }
    printf("\n");
    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=nst; j++){
            printf("*"); // for stars
        }
        for(int k=1; k<=nsp ; k++){
            printf(" "); // for space
        }
        for(int m=1; m<=nst ; m++){
            printf("*"); // for stars
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}