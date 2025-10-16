#include <stdio.h>
int main() {
    //x++ and ++x are different operators
    //x++ means use x,then increment
    //++x means increment first then use
    //similarly x-- and --x are different operators
    //y=x-- means first store the value of x in y then decrease x by 1 and store in x
    //z=--x means first decrease the value of x by 1 then store it in x
    int x=4,y=4,z=4,u=4;
    int a,b,c,d;
    a=x++;
    b=++y;
    c=z--;
    d=--u;
    printf("\na=%d b=%d c=%d d=%d\n",a ,b ,c ,d);
    printf("x=%d y=%d z=%d u=%d",x,y,z,u);

    return 0;
}