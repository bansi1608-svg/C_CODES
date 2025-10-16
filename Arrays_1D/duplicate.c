#include <stdio.h>
int main(){
    int arr[8] = {1 ,3 , 1 , 1 , 8, 9 , 4 , 5};
    for(int i=0 ; i<=7 ; i++){
        for(int j =i+1 ; j<=7 ; j++){
            if(arr[i] == arr[j])
            printf("%d is the dupliacte element",arr[i]);
            break;

        }
    }
    return 0;
}