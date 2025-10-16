#include <stdio.h>
int main(){
    int size;
    printf("Enter the number of elements of the array : ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0 ; i<=size-1; i++){
        printf("Enter the element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i=1 ; i<=size-1 ; i++){
        if(max<arr[i]) max=arr[i];
    }
    printf("The maximum value from the elements of the array is %d",max);

    return 0;
}
