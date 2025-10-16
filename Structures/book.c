#include <stdio.h>
#include <string.h>

int main(){
    typedef struct book{
        char name[50];
        float price;
        int no_of_pages;
    }book;
    book a ;  //struct book a;
    book b ;  // struct book b;
    book c ;  // struct book c;
    book d ;  // struct book d;

    a.no_of_pages = 100;
    a.price = 411.58;
    strcpy(a.name,"Secret seven");

    printf("%d\n",a.no_of_pages);
    printf("%f\n",a.price);
    printf("%s",a.name);


    return 0;
}