#include <stdio.h>
int main(){
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0 ; i<=size-1 ; i++){
        printf("Enter element number %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(int j=0 ; j<=size-1 ; j++){
        if(j%2!=0) arr[j] = arr[j]*2;
        else arr[j] = arr[j] + 10;
    }
    
    for(int k =0; k<=size-1 ; k++){
        printf("The element number %d is %d\n", k+1 ,arr[k]);

    }
    return 0;
}