#include <stdio.h>
#include <string.h>
struct punkt
{
    int x,y;
};

int main(){
    int a,a2;
    struct punkt p1 = {.x = 2, .y=5};
    struct punkt p2 = {.x = 3, .y=4};
    struct punkt pp1 = {.x =2, .y=5};
    struct punkt pp2 = {.x=3, .y=4};
    
    a = (p2.y-p1.y)/(p2.x - p1.x);
    a2 = (pp2.y-pp1.y)/(pp2.x - pp1.x);

    if(a==a2) printf("Proste sa rownolegle.\n");
    else printf("nie sa");
}
