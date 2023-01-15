#include <stdio.h>
#include <string.h>
struct punkt
{
    int x,y;
};

int main(){
    struct punkt p = {.x = 4, .y=3};
    struct punkt p1 = {.x=2, .y=5};
    struct punkt p2 = {.x=7, .y=5};
    struct punkt p3 = {.x=2, .y=1};
    struct punkt p4 = {.x=7, .y=1};

    if(p.x>p1.x&&p.x<p2.x&&p.y<p1.y&&p.y>p3.y) printf("Jest");
    else printf("nie jest");



}