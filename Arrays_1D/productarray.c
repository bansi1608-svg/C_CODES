#include <stdio.h>
int main (){
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    int product=1;
    for(int i=0 ; i<= size-1 ; i++){
        
        printf("Enter element number %d : ",i+1);
        scanf("%d",&arr[i]);
        product = product * arr[i];
    }
    printf("\nThe product of all elements in the array is %d ",product);
    return 0;
}