#include <stdio.h>
int main(){
    int x= 0;
    char a= (char)x;
    // printf("%c",a);
    // printf("%d",x);
    // printf("%c",x);
    char arr[] ={ 'h' , 'e' , 'l' , 'l' , 'o' , '\0'};   
    int i=0;
    while( arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}