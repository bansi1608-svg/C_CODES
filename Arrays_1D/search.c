#include <stdio.h>
#include <stdbool.h>
int main(){
    int arr[8] = { 1 ,2 ,3 , 4 ,5 ,6 ,7 , 8};
    int x=3;
    int idx= -1;
    bool flag = false ; // false means not present 
    for(int i=0 ; i<=7 ; i++){
        if(arr[i]==x){
            flag= true ; // true means present 
            idx=i;
            break;
        }
    }
    if(flag==false) {
        printf("Not present");
    }
    else{
        printf("%d is present and its index is %d",x , idx);
    }
    return 0;
}