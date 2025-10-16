#include <stdio.h>
int main() {
    int r;
    printf("Enter number of rows : ");
    scanf("%d",&r);
    int c;
    printf("Enter number of columns : ");
    scanf("%d",&c);
    int arr[r][c]; // r*c = total elements
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            scanf("%d",&arr[i][j]);
        }
        
    }
    // 1 2 3  // r=2
    // 4 5 6  // c=3

    // 1 4
    // 2 5
    // 3 6
    printf("\n");
    int brr[c][r];
    for(int i=0 ; i<c ; i++){ // c = 2
        for(int j=0 ; j<r ; j++){ // r = 3
        printf("%d ",arr[j][i]);
        brr[i][j]= arr[j][i];
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0 ;i < c ; i++ ){
        for(int j=0 ; j<r ; j++){
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}