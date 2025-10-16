#include <stdio.h>
int main() {
    int n,a;
    char ch;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=1; i<=n ; i++){
        for(int j=1 ; j<=i ; j++){
            a=j+64;
            ch=(char)a;
            printf("%c",ch);
        }
        printf("\n");
    }

    return 0;
}