#include <stdio.h>
int main (){
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    int sum=0;
    for(int i=0 ; i<= size-1 ; i++){
        
        printf("Enter element number %d : ",i+1);
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("\nThe sum of all elements in the array is %d ",sum);
    return 0;
}