// TO ROTATE AN ARRAY BY K TIMES
/*
STEP-1: k = k%n
STEP-2: reverse(arr, 0 , n-1)
STEP-3: reverse(arr, 0 , k-1)
STEP_4: reverse(arr, k , n-1)
*/

void reverse( int arr[] , int a , int b){
    for(int i=a ,j=b ; i<=j ; i++ , j-- ){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
  return;

}






#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<=n-1 ; i++){
        printf("Enter the element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter the number of times array is to be rotated : ");
    scanf("%d",&k);
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    
    for(int i=0 ; i<= n-1 ; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}