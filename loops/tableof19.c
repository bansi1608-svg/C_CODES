#include <stdio.h>
int main() {
    for( int b=1 ; b<=190 ; b=b+1){
        if(b%19==0) printf("%d\n",b);
    }
    return 0;
}