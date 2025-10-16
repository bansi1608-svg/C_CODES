#include <stdio.h>
int main(){
    int n;
    char c,d,e;
    int x,y,z;
    printf("Enter number of lines:");
    scanf("%d",&n);
    int nst = n-1,nsp = 1;
    
    for(int a=1 ; a<2*n; a++){// first time
        x=64+a;
        c=(char)x;
        printf("%c",c);
    }
    printf("\n");
    for(int i=1; i<=n-1; i++){
        int q=1;
        for(int j=1; j<=nst; j++){
            y=64+j;
            d=(char)y;
            printf("%c",d); // for letters
            q++;
        }
        for(int k=1; k<=nsp ; k++){
            printf(" "); // for space
            q++;
        }
        for(int m=1; m<=nst ; m++){
            z=64+q;
            e=(char)z;
            printf("%c",e); // for letters
            q++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}