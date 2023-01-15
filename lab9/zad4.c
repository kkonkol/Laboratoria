#include <stdio.h>
#include <string.h>
struct punkt
{
    int x,y;
};

int main(){
    int a,b;
    struct punkt p1 = {.x = 2, .y=5};
    struct punkt p2 = {.x = 3, .y=4};

    a = (p2.y-p1.y)/(p2.x - p1.x);
    b = p1.y - a*p1.x; 

    printf("y = ");
    printf("%d",a);
    printf("x");
    if(b>0) printf("+");
    printf("%d", b);
}
