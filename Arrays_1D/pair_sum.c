#include <stdio.h>
int main() {
    int arr[8] ={ 9 , 0 , 12, 4 ,5 ,6 ,7 ,8 };
    int count=0;
    int x=12;
    for(int i=0 ; i<=7 ; i++){
        for(int j=i+1 ; j<=7 ; j++){
           if( arr[i] + arr[j]==x){ count++ ;
           printf("(%d , %d)\n", arr[i] , arr[j]);
        }

        }
    }
    printf("%d",count);
    return 0;
}