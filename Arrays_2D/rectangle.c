#include <stdio.h>
int main(){

    int arr[5][5] = { 0 , 1 , 2 , 3 , 4,0 , 1 , 2 , 3 , 4,0 , 1 , 2 , 3 , 4,0 , 1 , 2 , 3 , 4,0 , 1 , 2 , 3 , 4,};
    int l1;
    int l2;
    printf("Enter l1: ");
    scanf("%d",&l1);
    printf("Enter l2: ");
    scanf("%d",&l2);
    int sum=0;
    for(int i=l1 ; i<=4 ; i++){
        for(int j=l2 ; j<=4 ; j++){
            printf("%d ", arr[i][j]);
            sum=sum+ arr[i][j];
        }
        printf("\n");
    }
    printf("\n Sum = %d",sum);
    return 0;
}

