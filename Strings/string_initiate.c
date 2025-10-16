#include <stdio.h>
int main() {
    char Q[] = "HELLO ishgchsbjbcagb\0";
    int i=0;
    char B[] = "HEYYY";
    while(Q[i]!='\0'){
        printf("%c",Q[i]);
        
        i++;
    }
    int j=0;
    printf("\n");
    while(B[j]!='\0'){
        printf("%c",B[j]);
        
        j++;
    }
    printf("\nSize of B[]= %d",j+1);
    return 0;
}