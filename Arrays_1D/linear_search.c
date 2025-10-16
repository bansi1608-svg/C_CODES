#include <stdio.h>
int main() {
    int arr[10] = { 1 , 2 ,3 ,4 ,5 ,6 ,8 ,9, 10};
    int sum= 55;
    int s=0;
    for(int i=0 ; i<=8 ; i++){
        s = s + arr[i];
    }
    int missing = sum - s;
    printf("The missing element is %d",missing);

    return 0;
}