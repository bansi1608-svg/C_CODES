#include <stdio.h>
int fib(int a){
    printf("1 1 ");
    int p=1;
    int q=1;
    for(int i=1;i<=a-2 ; i++){
    
    int sum=p+q;
    p=q;
    q=sum;
    printf("%d ",sum);
    
}
return 0;
}

int main() {
    int n;
    printf("Enter the number of fibonacci terms: ");
    scanf("%d",&n);
    int fibonacci = fib(n);
    return 0;
}

