#include<stdio.h>
void func(int x[]){
   int temp = x[0];
   x[0] = x[1];
   x[1] = temp;
   return;
}

// when we use array in a diiferent function , address of the first element is passed
// therefore its pass by reference not pass by value
int main (){
   int arr[5] = { 9 , 8, 7 ,3 ,1};
   printf("%d %d\n" , arr[0] , arr[1]);
   func(arr);
   printf("%d %d" , arr[0] , arr[1]);
    return 0;
}