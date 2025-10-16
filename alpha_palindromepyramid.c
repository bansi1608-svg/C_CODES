#include <stdio.h>
int main (){
    int n,a,b;
    char ch , CH;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    int nsp= n-1;
    
    for(int i=1 ; i<=n ; i++){
        for(int j=1;j<=nsp; j++){//spaces
            printf(" ");
        }
        nsp--;
        for(int k=1 ; k<=i ; k++){//Letters
            a=k+64;
            ch = (char)a;
            printf("%c",ch);
        }
        int y= i-1; // for reverse numbers
        for(int m=1 ; m<=i-1 ; m++){
            b=y+64;
            CH = (char)b;
            printf("%c",CH);
            
            y--;// reduce it by 1 
        }
        printf("\n");
    }
    return 0;
}