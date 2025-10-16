#include <stdio.h>
int main(){
    int arr[10]={ 1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10};
    int sum_e=0;
    int sum_o=0;

    for(int i=0 ; i<=9 ; i++){
        if(i%2==0) sum_e += arr[i];
        else sum_o += arr[i];
    }
    int diff = sum_o - sum_e;
    printf("%d",diff);
    return 0;
}