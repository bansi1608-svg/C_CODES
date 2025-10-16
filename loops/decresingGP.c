#include <stdio.h>
int main (){ 
    float a=1000 , n;
    printf("Enter the number of terms of gp: ");
    scanf("%f",&n);
    for(int i=1 ; i<=n ; i=i+1){
        printf("%f\n",a);
        a=a/5;
    }
    return 0;
}