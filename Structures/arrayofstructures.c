#include <stdio.h>
#include <string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char name[20];
    }pokemon;

    pokemon arr[3];
    arr[0].attack = 500;
    arr[0].hp = 10;
    arr[0].speed = 300;
    strcpy(arr[0].name , "MEOW");

    arr[1].attack = 50;
    arr[1].hp = 100;
    arr[1].speed = 30;
    strcpy(arr[1].name , "Pikachu");

    arr[2].attack = 50;
    arr[2].hp = 100;
    arr[2].speed = 30;
    strcpy(arr[2].name , "booboo");

    for(int i=0 ; i<3 ; i++){
        printf("Name = %s\n",arr[i].name);
        printf("Attack = %d\n",arr[i].attack);
        printf("Speed = %d\n",arr[i].speed);
        printf("HP = %d\n\n",arr[i].hp);
       
    }
    return 0;
}