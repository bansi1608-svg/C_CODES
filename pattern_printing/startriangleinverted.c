#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1; i<=n ; i++){
        for(int j=n ; j>=i ; --j){// i+j=5 therefore we can write 
            //int j=1; j<=n+1-i ;j++
        printf("*");}
        printf("\n");
    }
    return 0;
}