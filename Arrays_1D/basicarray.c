#include <stdio.h>
int main(){
    int arr[5] = { 9, 6, 4, 2, 1};
    // index of an array starts from 0
    // also we can change values of elements within the array
    printf("%d\n", arr[3]);
    arr[4] = 100;
    printf("%d\n", arr[4]);
    float brr[3] = { 1 , 1.2 , 1.4};
    printf("%f %f\n", brr[0] , brr[2]);
    char crr[3] = { 'A' , 'y' , '@'};
    printf("%c %c %c", crr[0] , crr[1] , crr[2]);

    return 0;
}