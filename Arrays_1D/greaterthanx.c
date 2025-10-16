#include <stdio.h>
int main(){
    int arr[10] = { 1 ,2 ,34 , 36, 67 , 98, 59 , 2 , 80 , 10};
    int x=40;
    int count=0;
    for(int i=0 ; i<= 9 ; i++){
        if(arr[i]>x) count++;
        
    }
    printf("%d",count);
    return 0;
}