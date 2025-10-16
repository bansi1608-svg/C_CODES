#include <stdio.h>
#include <string.h>
int main(){
    typedef struct cricketer{
        int age;
        int noofmatches;
        float average;
        char name[50];
    }cricketer;

    cricketer arr[3];
    
    for(int i=0 ; i<3 ; i++){
        scanf(" %[^\n]",arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].noofmatches);
        scanf("%f",&arr[i].average);
        
    }

    for(int i=0 ; i<3 ; i++){
        printf("Name : %s\n",arr[i].name);
        printf("Age : %d\n",arr[i].age);
        printf("Number of Matches : %d\n",arr[i].noofmatches);
        printf("Average : %f\n\n",arr[i].average);
        
    }

    return 0;
}