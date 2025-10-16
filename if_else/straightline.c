#include<stdio.h>
int main (){
int x1 , y1 , x2 , y2 , x3 , y3 ;
printf("Enter abscisaa of first point : ");
scanf("%d",&x1);
printf("Enter ordinate of first point : ");
scanf("%d",&y1);
printf("Enter abscisaa of second point : ");
scanf("%d",&x2);
printf("Enter ordinate of second point : ");
scanf("%d",&y2);
printf("Enter abscisaa of third point : ");
scanf("%d",&x3);
printf("Enter ordinate of third point : ");
scanf("%d",&y3);
if( x1*(y1-y2) + x2*(y2-y3) + x3*(y3-y1) ==0){
    printf("They all lie on same straight line");
}
else{
    printf("They don't lie on the same straight line");
}


    return 0;
}