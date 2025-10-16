#include <stdio.h>

void tower(int n , char s ,char h, char d){ // s=source , h=helper , d=destination
     if(n==0) return;
     tower(n-1,s,d,h);
     printf("%c -> %c\n",s,d);
     tower(n-1,h,s,d);
     return;
}
    // number of min moves = 2^n -1
int main(){
    int n;
    printf("Enter the number of discs : ");
    scanf("%d",&n);
    tower(n ,'A','B','C');
}