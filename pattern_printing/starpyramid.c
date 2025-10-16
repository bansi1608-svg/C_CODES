#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1; i<=n ; i++){
        for(int j=1; j<=n-i ; j++){
            printf(" ");//for spaces
        }
        for(int k=1 ; k<=(2*i -1); k++){
            printf("*");//for stars
        }
        printf("\n");
    }
    return 0;
}
// we can also use a new variable a
// by this method our loop will be independent of variable i
/*int a=1
for(int i=1; i<=n ; i++){
printf("*");
}
a=a+2;
printf("\n");
*/
