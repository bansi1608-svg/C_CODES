#include <stdio.h>
#include <limits.h>
int main(){
    int size;
    printf("Enter the number of elements of the array : ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0 ; i<=size-1; i++){
        printf("Enter the element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int max = INT_MIN; 
    int smax= INT_MIN; 
    for(int i=0 ; i<=size-1 ; i++){
        if(max<arr[i]) { // it only works when elements of array are in increasing order
            smax=max;// smax is now previous max
            max=arr[i];// max is now a new maxx
    }
        else if(smax < arr[i] && max!= arr[i]){// for decreasing order
            smax= arr[i];
        }
    }
  
   
    printf("The second maximum value from the elements of the array is %d",smax);

    return 0;
}
