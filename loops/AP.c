#include <stdio.h>
int main(){
    int a,d,N;
    printf("Enter first term : ");
    scanf("%d",&a);
    printf("Enter difference : ");
    scanf("%d",&d);
    printf("Enter the number of terms : ");
    scanf("%d",&N);
    for(int i=a; i<=a+ (N-1)*d ;i=i+d ){
        printf("%d\n",i);

    }
    return 0;
}