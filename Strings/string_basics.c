#include <stdio.h>
int main() {
    // string is a character array
    // char takes 1 byte(8 bits) space i.e 2^8 characters 
    // int takes 4 bytes(32 bits) space i.e 2^32 numbers
    // Hexadecimal system : 0 1 2 3 4 5 6 7 8 9 a b c d e f = 16 elements 
    // ASCII values : 'A'=65 , 'a'=97 , '0'=48 , '9'=57

    char arr[5] = { 'A' , 'B', 'C', '1' , 'q'};
    char s= '0';
    int x = (int)s;
    printf("%c\n",arr[0]);
    printf("%c\n",arr[1]);
    printf("%c\n",arr[2]);
    printf("%c\n",arr[3]);
    printf("%c\n",arr[4]);
    printf("%c\n",arr[0]);
    printf("%d",x);
    return 0;
}