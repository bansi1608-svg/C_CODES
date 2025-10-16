#include <stdio.h>
int main(){
    int n;
    printf("Enter an odd number : ");
    scanf("%d",&n);
    int nst=1;  // number of stars
    int nsp=n/2;// number of spaces
    int ml = n/2 +1; // ml = middle line
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=nsp ; j++){
            printf(" ");
        }
        for(int k=1; k<=nst ;k++ ){
            printf("*");
        }
        if(i<ml){
        nsp--;
        nst+=2; // a= a+3  -> a+=3
        }
        else{
        nsp++;
        nst-=2;
        }
        printf("\n");
    }
    return 0;
}