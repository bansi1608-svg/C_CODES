#include <stdio.h>
int main() {
    // boolean algebra -> true=1 , false=0
    //x=3 , x<10 which is a true statement then 
    //output: 1
    int x=3;
    int y=x=10 ;
    int z=x<20 ;
    printf("\n x=%d y=%d z=%d",x ,y ,z) ;

    int a=2;
    printf("\n %d %d %d ",a==2 , a=5 , a>4); // == means boolean i.e if its true or false(comparison)
    // = means new value is assigned to tht variable

    int b=65;
    char c='A'; // ascii value of A=65 and a=97
    if(b==c)
    printf("wow");
    else
    printf("eww");

    return 0;
}