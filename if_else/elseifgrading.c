#include<stdio.h>
int main() {
    // m>90 : A grade
    // m>70 : B grade
    // m>50 : C grade
    // m<50 : D grade
    int m;
    printf("Enter percentage : ");
    scanf("%d",&m);
    if(m>90){ 
        printf("A grade");
    }
    else if(m>70){
        printf("B grade");
    }
    else if(m>50){
        printf("C grade");
    }
    else{ 
        printf("D grade");
    }
    return 0;
}