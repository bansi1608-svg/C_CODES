#include <stdio.h>
int main() {
    int x , y ;
    printf("Enter the coordinates : ");
    scanf("%d %d",&x ,&y);
    if(x==0 && y==0){
        printf("The point lies on origin");
    }
    else if(y==0){
        printf("The point lies on x axis");
    }
    else if(x==0){
        printf("The point lies on y axis");
    }
    else{
        printf("The point doesn't lie on x or y axis");
    }
    return 0;
}