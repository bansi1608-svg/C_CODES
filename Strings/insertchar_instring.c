#include <stdio.h>
int main(){
    char str[20] = "WEDnesDAY";
    // 2nd index = '0'
    for(int i=8 ; i>=2 ; i--){
        str[i+1] = str[i];
    }
    str[2]= '0';
    printf("%s",str);
    return 0;
}