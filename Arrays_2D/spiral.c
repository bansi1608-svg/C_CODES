#include <stdio.h>
int main() {
    int m;
    printf("Enter number of rows of the matrix: ");
    scanf("%d",&m);
    int n;
    printf("Enter number of columns of the matrix: ");
    scanf("%d",&n);
    int a[m][n];

    printf("Enter all the elements of the matrix\n");
    for(int i=0 ; i<m ; i++){
       for(int j=0 ; j<n ; j++){ 
        scanf("%d",&a[i][j]);
       }
    }
    printf("\n");



    // spiral print 

    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    int tne = m*n; // total number of elements
    int count = 0;

    while(count<tne){
    // print minimum row
    for(int j=minc ; j<=maxc ; j++){
        printf("%d ",a[minr][j]);
        count++;
    }
    minr++;
    if(count>=tne) break;

    // print maximum column
    for(int i=minr ; i<=maxr ; i++){
        printf("%d ", a[i][maxc]);
        count++;
    }
    maxc--;
    if(count>=tne) break;

    // print maximum row
    for(int j=maxc ; j>=minc ; j--){
        printf("%d ", a[maxr][j]);
        count++;
    }
    maxr--;
    if(count>=tne) break;

    // print minimum column
    for(int i=maxr ; i>=minr ; i--){
        printf("%d ", a[i][minc]);
        count++;
    }
    minc++;
    

    }

    
    
    
    return 0;
}