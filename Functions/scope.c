#include <stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int fact=1;
    for(int i=1 ; i<=n ; i++ ){
         fact = fact * i;
    } 
    printf("%d",fact);
    return 0;
}
//Here i is a scope variable 
//i is only defined inside the for loop
// It's like the limit of the variable i