#include <stdio.h>
int main(){
    int arr[3][4] = { {0 , 1 , 1 , 1} , {0 , 0 , 0 , 1 } , { 0 , 1 , 1 ,0}};
    int maxcount=0;
    int index =-1 ;
    for(int i=0 ; i<3 ; i++){
        int count=0;
        for(int j=0 ; j<4 ; j++){
            if(arr[i][j]==1) count ++;
        }
        if(maxcount<count) maxcount = count , index=i ;
         
    }
    printf("Max_1 = %d  & row number= %d",maxcount,index+1);
    return 0;
}