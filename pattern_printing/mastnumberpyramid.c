#include <stdio.h>
int main(){
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    int nst = n-1,nsp = 1;
    
    for(int a=1 ; a<2*n; a++){// first time
         printf("%d",a);
    }
    printf("\n");
    for(int i=1; i<=n-1; i++){
        int q=1;
        for(int j=1; j<=nst; j++){
            printf("%d",j); // for stars
            q++;
        }
        for(int k=1; k<=nsp ; k++){
            printf(" "); // for space
            q++;
        }
        for(int m=1; m<=nst ; m++){
            printf("%d",q); // for stars
            q++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}