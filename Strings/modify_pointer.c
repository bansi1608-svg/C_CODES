#include <stdio.h>
int main(){
 // In normal string initialisation, we can modify individual characters but not the entire string at the same time 
   char str[] = "Coffee pls";
   str[0] = 'K';
   printf("%s\n",str);

 // In pointer string initialisation, we can modify whole string only but not the individual characters

   char* ptr = "Urgently needed";
   ptr = "pretty pleasee ";
   printf("%s\n",ptr);

// string didn't change, only the pointer moves and point towards diff strings
   char* pointer= str;
   pointer = "YOU";
   printf("%s\n",str);

// pointer will be pointing towards str
// as we write *pointer it will be refering to the first character of the str
// we can change tht 1st character only using *pointer
   char* p = str;
   *p = 'P';
   printf("%s\n",str);


//pointers change the address to which they poitn after initialising a new character array

   char* p1 = "Physics";
   printf("Address 1 : %p\n",p1);
   p1 = "Chem";
   printf("Address 2 : %p",p1);

    return 0;
}

