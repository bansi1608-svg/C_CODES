// Online C compiler to run C program online
#include <stdio.h>

int main() {
   
  int td , yr , lpyr ,diffyrs ;
  printf("enter year: ");
  scanf("%d",&yr);
  diffyrs = yr - 1900  ;
  lpyr = (diffyrs-1)/4 - (diffyrs-1)/100 + (diffyrs-1)/400 ;
  td= (diffyrs-lpyr)*365 + lpyr*366 ;
  if(td%7==0){
      printf("Monday");
  }
  else if(td%7==1){
      printf("Tuesday");
  }
  else if(td%7==2){
      printf("Wednesday");
  }
  else if(td%7==3){
      printf("Thursday");
  } 
  else if(td%7==4){
      printf("Friday");
  }
  else if(td%7==5){
      printf("Saturday");
  }
  else{
      printf("Sunday");
  }

  

    return 0;
}