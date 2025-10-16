 #include <stdio.h>
int main() {
    
    int n;
    printf("Enter number of rows/columns of the matrix: ");
    scanf("%d",&n);
    int a[n][n]; 

    // spiral scan 

    int minr=0;
    int maxr=n-1;
    int minc=0;
    int maxc=n-1;
    int tne = n*n; // total number of elements
    int count = 0;
    int num=1;

    

    while(num<=tne){
    // input minimum row
    for(int j=minc ; j<=maxc && num<=tne ; j++){
       a[minr][j] = num;
       num++;
       
    }
    minr++;
    

    // input maximum column
    for(int i=minr ; i<=maxr && num<=tne; i++){
       
        a[i][maxc]= num;
        num++;
    }
    maxc--;


    // input maximum row
    for(int j=maxc ; j>=minc && num<=tne ; j--){
        
        a[maxr][j] = num;
        num++;
      
    }
    maxr--;
 

    // input minimum column
    for(int i=maxr ; i>=minr && num<=tne; i--){
   
        a[i][minc] = num;
        num++;
    }
    minc++;
    

    }
   //print spiral
   for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<n ; j++){
        printf("%4d ", a[i][j]);
    }
    printf("\n\n");
   }
    
    return 0;
}
