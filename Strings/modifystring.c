#include <stdio.h>
int main(){
    char str[] = "The Watcher";
    str[1] = 98;
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
    int j=0;
    while(str[j]!='\0'){
        printf("%c",j[str]);
        j++;
    }

    printf("\n");
    int k=0;
    while(str[k]!='\0'){
        printf("%c",*(str+k));
        k++;
    }

    printf("\n");
    int l;
    l=0;
    while(str[l]!='\0'){
        printf("%c",*(str+l));
        
        l++;
    }
    return 0;
}