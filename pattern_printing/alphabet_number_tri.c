#include <stdio.h>
int main() {
    int n,k;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        for(int j=1; j<=i ; j++){
            if(i%2==0){
                k=j+64;
                char ch=(char)k;
                printf("%c",ch);
            }
            else{
                printf("%d",j);
            }
        }
        printf("\n");
    }
    return 0;
}