#include <stdio.h>
int main() {
    int m;
    printf("Enter number of rows of 1st matrix: ");
    scanf("%d",&m);
    int n;
    printf("Enter number of columns of 1st matrix: ");
    scanf("%d",&n);
    int p;
    printf("Enter number of rows of 2nd matrix: ");
    scanf("%d",&p);
    int q;
    printf("Enter number of columns of 2nd matrix: ");
    scanf("%d",&q);

    if(n!=p) {
        printf("ERROR");
        
    }
    else{

    int a[m][n];
    int b[p][q];

    // 1st matrix input
    printf("Enter all the elements of 1st matrix\n");
    for(int i=0 ; i<m ; i++){
       for(int j=0 ; j<n ; j++){ 
        scanf("%d",&a[i][j]);
       }
    }

    // 2nd matrix input
    printf("Enter all the elements of 2nd matrix\n");
    for(int i=0 ; i<p ; i++){
       for(int j=0 ; j<q ; j++){
        scanf("%d",&b[i][j]);
       }
    }
    printf("\n");
    // multplying a[][] and b[][]
    
    int res[m][q] ;
   
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<q ; j++){
            
            res[i][j]=0;
            for(int k=0 ; k<n  ; k++){
                res[i][j] = res[i][j] + a[i][k]*b[k][j];
            }
        }
    }


    // printing the resultant matrix
    printf("The resultant matrix is : \n");
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<q ; j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }

    }
    return 0;
}