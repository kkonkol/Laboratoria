#include <stdio.h>
#include <string.h>
struct punkt
{
    int x,y;
};

int main(){
    struct punkt zad1 = {.x = 2, .y=5};
    printf("\n");
    printf("%d", zad1.x);
    printf(",");
    printf("%d\n", zad1.y);
}
