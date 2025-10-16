#include <stdio.h>
int main() {
    int y;
    printf("Enter the number whose table has to be given : ");
    scanf("%d",&y);
    for(int N=1 ; N<=1000;N=N+1){
        if(N%y==0) printf("%d\n",N);
    }
    return 0;
}