#include <stdio.h>
int main(){
    FILE* ptr = fopen("bansi.txt" , "r");
    char str[100];
    while(fgets(str,100,ptr)!=NULL){
        printf("%s",str);
    }

    // creating a file
    FILE* ktr = fopen("creatingfile.txt" , "w");

    // writing in a file 

    char btr[] = "HELLO YOU";
    fputs(btr,ktr);
    fclose(ktr);

    return 0;
}