#include <stdio.h>
void india(){
    printf("You are in india\n"); // calling india
    void australia();
    australia();
    return;
}

void australia(){
    printf("You are in australia\n"); // calling australia
    
    void england ();
    england();
    return;
}
void england(){
    
    printf("You are in England\n"); // calling england
    return;
}




int main(){
    india(); 
    return 0;
}