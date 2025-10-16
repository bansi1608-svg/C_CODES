#include <stdio.h>
// reversing part of array
void reverse (int x[] , int a , int b){
    for(int i=a , j=b ; i<=j ; i++ , j--){
        int temp = x[i];
        x[i] = x[j];
        x[j] = temp;

    }
    return;

}
int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    reverse(arr , 1 , 4 );
    for(int i = 0 ; i<=6 ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}