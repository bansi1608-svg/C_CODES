#include <stdio.h>
int main () {
    int CP , SP ;
    printf("Enter the Cost price :");
    scanf("%d",&CP);
    printf("Enter the Selling Price :");
    scanf("%d",&SP);
    if(SP > CP) {
        int p;
        p = SP - CP ;
        printf("The profit made is : %d",p);
    }
    else{
        int l ;
        l = CP - SP ;
        printf("The loss made is : %d",l);

    }
    return 0;
}