#include <stdio.h>
int main() { // using OR operator to determine the coordinates
    int a;
    printf("Enter number:");
    scanf("%d",&a);
    for(int i=1; i<=a ; i++){
        for( int j=1 ; j<=a ; j++){
            if(i==1 || j==1 || i==a || j==a){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}