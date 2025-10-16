#include<stdio.h>
int main() {
int a , b ,c ;
printf("Enter age of Ram : ");
scanf("%d",&a);
printf("Enter age of Shyam : ");
scanf("%d",&b);
printf("Enter age of Ghanshyam : ");
scanf("%d",&c);
if(a>b){
    if(c>b){ 
        printf("Shyam is youngest");
    }
    else{ // a>b>c
        printf("Ghanshyam is youngest");
    }
}
else{ //b>a
    if(c>a){ 
        printf("Ram is youngest");
    }
    else{ // b>a && c<a -> b>a>c}
        printf("Ghanshyam is youngest");
}
}
    return 0;
}