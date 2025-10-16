#include <stdio.h>
int main(){
    int n,a;
    char ch;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i ; j++){
            printf(" ");
        }
        for(int k=1 ; k<=(2*i-1); k++){
            a=64+k;
            ch = (char)a;
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}