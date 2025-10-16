#include <stdio.h> 
int main() {  
    int a,r,n;
    printf("Enter first term : ");
    scanf("%d",&a);
    printf("Enter common ratio : ");
    scanf("%d",&r);
    
    for( int i=a ; i<=a*r*r*r*r*r; i= i*r){
        printf("%d\n",i);
    }

    return 0;
}