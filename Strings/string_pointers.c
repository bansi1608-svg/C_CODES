#include <stdio.h>
#include <string.h>
int main (){
    char str[40] = "HELLO YOU";
    char* ptr = str; // ptr now points to str[0]
    
    while(*ptr != '\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}