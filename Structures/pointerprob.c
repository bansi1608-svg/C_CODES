#include <stdio.h>
typedef int* pointer;
int main() {
    int x=5 , y=7 ;
    pointer a = &x , b = &y;
    // int* x,y ; // int* x , int y
    printf("%p\n",a);
    printf("%p\n",b);
    return 0;
}