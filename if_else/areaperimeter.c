#include <stdio.h>
int main () {
    int l , b , p , a ;
    printf("Enter length of rectangle :");
    scanf("%d",&l);
    printf("Enter breadth of rectangle :");
    scanf("%d",&b);
    p = 2*(l + b) ;
    a = l*b ;
    if(p>a){
        printf("The perimeter is greater than the area");
    }
    else{
        printf("The area is greater than the perimeter");
    }
    return 0;
}