#include <stdio.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    // 2 to 5 index reverse number
    for(int i=2 , j=5; i<=j ; i++ , j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] =temp;
    }
    for(int i = 0 ; i<=6 ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}