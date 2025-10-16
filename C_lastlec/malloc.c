#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
 int a = sizeof(int);
  int b = sizeof(char);
   int c = sizeof(long);
    int d = sizeof(double);
    int e = sizeof(bool);


    int* ptr = (int*) malloc(10*4);
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);

    
    printf("%d\n",a);
     printf("%d\n",b);
      printf("%d\n",c);
       printf("%d\n",d);
       printf("%d\n",e);
   
    return 0;
}