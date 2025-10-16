#include <stdio.h>
int main() {
    int a,b,p=1;
    printf("Enter base : ");
    scanf("%d",&a);
    printf("Enter power : ");
    scanf("%d",&b);
    for(int i=1;i<=b;i++){
        p=p*a;
    }
    printf("%d raised to %d is %d",a,b,p);
    return 0;
}