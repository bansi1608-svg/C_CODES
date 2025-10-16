#include <stdio.h>
int main(){
    //WHAT IS TYPECASTING??
    // char ch ='A';
    // printf("%c\n",ch);
    // int x= (int)ch;
    // printf("%d\n",ch);
    for(int i=65 ;i<=90 ; i++){
        
        char ch= (char)i;
        printf("%d :> %c \n",i,ch);
    }
    return 0;
}