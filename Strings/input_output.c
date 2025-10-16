#include <stdio.h>
#include <string.h>
int main() {
    char bk[]= "ALWAYS AND FOREVER";
    printf("%s\n", bk);
    puts(bk); //shifts to new line automatically
    puts("KLAUS MIKAELSON");
    // char x[40];
    // scanf("%s",x); // don't use & in scanning string
    // printf("%s",x); // only first word will be printed if scanned through %s
    char y[40];
    gets(y);
    puts(y); // entire sentence  can be taken as input
    return 0;
}