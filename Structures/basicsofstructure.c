#include <stdio.h>
int main(){
    struct pokemon{
    int hp;
    float speed;
    int attack;
    char tier; // S,A,B,C,D
 };

 struct pokemon pikachu;
 pikachu.attack = 60;
 pikachu.hp = 50;
 pikachu.speed = 80.9;
 pikachu.tier ='A';
 printf("Enter speed of pikachu: ");
 scanf("%f",&pikachu.speed);

struct pokemon booboo;
 booboo.attack = 180;
 booboo.hp = 190;
 booboo.speed = 200.9;
 booboo.tier ='S';
printf("%f",pikachu.speed);
    return 0;
}