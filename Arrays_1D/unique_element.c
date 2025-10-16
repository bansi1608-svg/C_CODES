#include <stdio.h>
#include <stdbool.h>

int main(){
    int arr[10] ={1, 1 , 2 , 2, 3 ,4 ,3 , 5 ,6 ,7};
    for(int i=0 ; i<=9 ; i++){
        bool flag = false;
        for(int j=i+1 ; j<=9 ; j++){
            
            if(arr[i] == arr[j]){ 
            flag=true;
            }
        }
        if(flag==true){
            printf("%d ",arr[i]);
            
        }

    }
return 0;
}