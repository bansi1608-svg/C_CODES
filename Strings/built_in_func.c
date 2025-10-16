#include <stdio.h>
#include <string.h>
int main(){

    // strlen(char*str) = returns the length of string
    char* str="Bansi";
    int x = strlen(str);
    printf("%d\n",x);

   // strcpy(char* s1 , char* s2) = copies the contents of string s2 to string s1{deep copy}
    char s1[20] = "WEDNESDAY ADDAMS";
    char s2[20];
    strcpy(s2,s1);
    s2[5]= '0';
    printf("%s\n",s2);

    // strcat(char* s1 , char* s2) = concat s1 string w s2 and stores the result in s1
    char s4[20] = "MORTICIA ";
    char s5[20] = "ADDAMS";
    strcat(s4,s5);
    
    printf("%s",s4);



    return 0;
}