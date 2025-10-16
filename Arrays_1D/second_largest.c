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
    for(int i=0 ; i<=size-1 ; i++){
        if(max<arr[i]) max=arr[i];
    }
    int smax = arr[0];
    for(int i=0 ; i<=size-1 ; i++){
        if(smax<arr[i] && arr[i]!=max) smax=arr[i];
    }
    printf("The second maximum value from the elements of the array is %d",smax);

    return 0;
}
