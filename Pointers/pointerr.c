#include <stdio.h>
int main(){
    // pointers : varaible ka address store 
    int a=5;
    int* x = &a; //int* stores address
    printf("%p\n",x);  //x has address of a 
    printf("%p\n",&a); //%p ,&a will print the address of a
    printf("%p\n",&x); //%p ,&x will print the address of x
    printf("%d\n",*x); // *x is pointing to the value of the address of a

int y=25;
int* b=&y;
*b = 7;
printf("%p\n",b);
printf("%p\n",&b);
printf("%d\n",*b); // using this we can swap value by using their address only
//here the value of y has changed to 7
}
