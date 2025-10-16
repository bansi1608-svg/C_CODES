#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0 ; i<=size-1 ; i++){
        printf("Enter element number %d : ",i+1);
        scanf("%d",& arr[i]);
    }
    int min = arr[0];
    for(int j=0 ; j<=size -1 ; j++){
        if(min>arr[j]) min=arr[j];
    }
    printf("Minimum value is %d", min);
    return 0;
}