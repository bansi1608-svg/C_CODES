#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    for(int i=0 ; i<=n-1 ; i++){
        printf("Enter element number %d : ",i+1);
        scanf("%d",& arr[i]);
        brr[n-i-1] = arr[i];
    }
    int count=0;
    for(int i=0 ; i<=n-1 ; i++){
        if(arr[i] == brr[i]) count++;
       }

    if(count==n) printf("Palindrome");
    else printf("Not a palindrome");
    return 0;
}