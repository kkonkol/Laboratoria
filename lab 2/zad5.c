#include <stdio.h>
int main(){
    int x;
    scanf("%i",&x);
    int tab[x];
    for(int i=0;i<x;i++)
    {
        scanf("%i",&tab[i]);
    }
    printf("%i\n",tab[0]);
}