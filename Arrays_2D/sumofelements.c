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
    int sum=0;
    printf("\n");
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            sum= sum + arr[i][j];
        printf("%d ",arr[i][j]);
        }
        printf("\n");
    } 
    printf("The sum of elements of this array is %d",sum);
    return 0;
}