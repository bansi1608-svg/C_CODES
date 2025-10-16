#include <stdio.h>
int main(){
    int arr[3][4] = { {1 , 2 , 3 , 4} , {5 , 6 , 7 , 8 } , { 0 , 1 , 1 ,0}};
    int maxsum=0;
    int index =-1 ;
    for(int i=0 ; i<3 ; i++){
        int sum=0;
       
        for(int j=0 ; j<=3 ; j++){
            sum = sum + arr[i][j];
        }
        if(maxsum<sum){ 
            maxsum = sum;
            index=i;
        }
           
        
    }
    printf("Maxsum = %d  & row number= %d",maxsum,index+1);
    return 0;
}