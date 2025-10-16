#include <stdio.h>
int main() {
    for( int k=1 ; k<=100 ; k=k+1 ){
        if(k%2!=0) printf("%d\n",k);
    }
    return 0;
}