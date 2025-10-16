#include <stdio.h>
int main(){
    int arr[7] = { 1,2,3,4,5,6,7};
    int brr[7];
    for(int i=0 ; i<=6 ; i++){
        brr[i] = arr[6-i];
    }
    for(int j=0 ; j<=6 ; j++){
        printf("%d " , brr[j]);
    }
    return 0;
}