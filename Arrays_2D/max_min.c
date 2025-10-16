#include <stdio.h>
int max(  int r , int c , int arr[r][c]){
    int max=-1;
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
           if( arr[i][j]> max) max = arr[i][j];

        }
    }
    return max;
}

int min(  int r , int c , int arr[r][c]){
    int min = arr[0][0];
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
           if( arr[i][j]< min) min = arr[i][j];

        }
    }
    return min;
}
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
    int ans1 = max( r , c , arr);
    printf("Max = %d\n",ans1);
    int ans2 = min(r , c  , arr);
    printf("Min = %d",ans2);
    return 0;
}