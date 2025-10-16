#include <stdio.h>
// external function : void
// code always starts running from main function
void greet(){ // a new function
    printf("Gm\n");
    printf("hyd\n");
    return; // over

}
int main() { // call tht function
    greet();
    greet();
    greet();

    return 0;
}