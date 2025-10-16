#include <stdio.h>
void swap(int a, int b){
        int temp;
        temp = a;
        a = b;
        return;
}
int main(){
int a=2;
int b=9;
swap(a,b);
printf("The value of a  is %d\n",a);
printf("The value of b  is %d",b);
return 0;
// This code is not running because of pass by value
// a and b are not swapped in main but their values are given to the boxes in void
// In the void we created new variables a and b which are different from the variables from main 
// Therefore the values of a and b got swappeed in void and not in main
// so our code returned the original a and b which were present in main 
// a and b in main are formal parameters and 2 and 9(the values of a and b) are actual parameters
}