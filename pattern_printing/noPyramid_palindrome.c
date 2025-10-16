#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    int nsp = n-1; // nsp= no of spaces
    for(int i=1 ; i<=n ; i++){
        int a= i-1;//numbers in reverse order
        for(int j=1; j<=nsp ; j++){//spaces
            printf(" ");
        }
        nsp--;
        for(int k=1 ; k<=i ;k++ ){//numbers
            printf("%d",k);
        }
        for(int m=1 ; m<=i-1 ; m++){//reverse numbers
            printf("%d",a);
            a--;
        }

        printf("\n");
    }
    return 0;
}