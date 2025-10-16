#include <stdio.h>
int main(){
    
    // shallow copy
    char s1[] = "BANSI";
    char* s2 = s1;
    s1[1] = 'I';
    printf("%s\n",s2);

    // deep copy
    char s3[] = "Damon";
    s3[2]= 't';
    char s4[] = "Damon";
    printf("%s\n",s4);
    printf("%s\n",s3);

    // make pointers ;
    char* a1 ;
    char* a2 = "ELENA";
    a1 = a2;
    printf("%p\n",a1);
    printf("%p\n",a2);
    printf("%s\n",a1);
    printf("%s",a2);
    return 0;
}