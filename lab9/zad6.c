#include <stdio.h>
#include <string.h>
struct punkt
{
    int x,y;
};

int main(){
    int g,d,l,p;
    double lp,pl;
    struct punkt p1 = {.x = 2, .y=5};
    struct punkt p2 = {.x = 3, .y=4};
    struct punkt p3 = {.x =6, .y=9};
    struct punkt p4 = {.x=8, .y=21};
    
    g = (p2.y-p1.y)/(p2.x - p1.x);
    d = (p4.y-p3.y)/(p4.x - p3.x);
    l = (p3.y-p1.y)/(p3.x - p1.x);
    p = (p4.y-p2.y)/(p4.x - p2.x);
    lp = (p4.y-p1.y)/(p4.x - p1.x);
    pl = (p3.y-p2.y)/(p3.x - p2.x);

    if(g==d&&l!=p) printf("trapez");
    else if(g==d&&l==p) printf("rownoleglobok");
    else if(lp*pl==-1&&g==d&&l==p) printf("kwadrat");
    else printf("nic");
}
