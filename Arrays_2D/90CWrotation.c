#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows/columns : ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter all elements\n");
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d",& arr[i][j]);
        }
    }
    printf("\n");
    // transpose

    for(int i=0 ; i<n ; i++){
        for(int j=i ; j<n ; j++){
            int temp= arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // swap rows 
    for(int i =0 ; i<n ; i++){
       int j=0 ;
       int k= n-1 ;
       while(j<k){
    // swap arr[i][j] and arr [i][k]
        int temp = arr[i][j];
        arr[i][j] = arr[i][k];
       arr[i][k] = temp;
       j++;
       k--;
       }
    }
    printf("\n");
    // print output


    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}