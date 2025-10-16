#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    int a;
    for(int i=1; i<=n; i++){
        if(i%2!=0) { a = 1;} //start with 1 if row is odd
        else{ a = 0;}//start with 0 if row is even
        for(int j=1; j<=i ; j++){
            printf("%d",a);
            if(a==0){
                a=1;
            }
            else{
                a=0;
            }
           

            }
            printf("\n");
        }
    /*
    ANOTHER OBSERVATION:
    when i==j : print 1
    when i+j%2==0 : print 1
    when i+j%2!=0 : print 0
     */

    return 0;
}