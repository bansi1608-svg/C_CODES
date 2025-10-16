#include <stdio.h>
int main(){

    int n; 
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int num = 1 ; num <=n ; num++){
        int t = num , td=0; // t=digit ; td= total digits
         
        //count digits
        while(t>0){
            td++;
            t = t/10;
        }
        t=num;
        int sum=0;

        // calculate Armstrong number
        while(t>0){
            int d = t%10;
            int p =1;
             
            for(int i=0 ; i< td ; i++){
                p=p*d; // raise digit to digits
            }
            sum = sum + p;
            t /= 10;
        }
        if(sum== num){
            printf("%d ",num);
        }
    }
    return 0;

}
    
// TEST CASES:

/*
 Enter a number: 500
1 2 3 4 5 6 7 8 9 153 370 371 407 
*/

/*
Enter a number: 12345
1 2 3 4 5 6 7 8 9 153 370 371 407 1634 8208 9474
*/