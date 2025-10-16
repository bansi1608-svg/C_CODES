#include <stdio.h>
int main(){
 int a=25;
 int* x = &a; // int* -> int ka address store karta hai
 // VVIMP -> *x=7 ; // a is changed to 7
 int** y=&x; // int** -> int* ka address store karta hai
 int*** z=&y;
 printf("%p\n",&x);
 printf("%p\n",y);
 printf("%d\n",a);
 printf("%d\n",*x);
 printf("%d\n",**y);
 printf("%d",***z);
return 0;
}