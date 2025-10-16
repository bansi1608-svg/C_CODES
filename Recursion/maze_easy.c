#include <stdio.h>

int maze(int cr,int cc,int er, int ec){
    int rightways=0;
    int downways=0;
    if(cc==ec && cr==er ) return 1;
    if(cr==er){
       rightways = rightways + maze(cr,cc-1,er,ec);
    }
    if(cc==ec){
        downways = downways + maze(cr-1 , cc , er ,ec);
    }
    if(cc>ec && cr>er){
        rightways = rightways + maze(cr,cc-1,er,ec);
        downways = downways + maze(cr-1,cc,er,ec);
    }
    int totalways = rightways + downways;
    return totalways;
}

int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter numbe rof columns :");
    scanf("%d",&m);
    int ans = maze(n,m,1,1);
    printf("%d",ans);
    return 0;
}