#include <stdio.h>
#include <math.h>
#include <limits.h>
// 1 byte = 8 bits
// int : 4 bytes -> 32 bits -> 2^32 numbers -> range = -2^16 to 2^16-1
// long : 8 bytes -> 64 bits -> 2^64 numbers -> range = -2^32 to 2^32-1
// char : 1 byte -> 8 bits -> 2^8 characters -> range = -2^4 to 2^4-1

int main(){
    float x = cbrt(8);
    float y = sqrt(4);
    printf("%f\n",x);
    printf("%f\n",y);

    int z = __INT_MAX__; //2147483647  // math.h
    printf("%d\n",z);

    long w = 26408982098875 ;
    printf("%ld\n",w);

    int a = INT_MIN;  // limits.h
    printf("%d\n",a);

    long b = LONG_MAX ;
    printf("%ld\n",b);

    return 0;
}