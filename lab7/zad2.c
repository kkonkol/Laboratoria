#include <stdio.h>
int main(){
    int tab[10];
    for(int i=0;i<10;i++)
    {
        scanf("%i\n", &tab[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf("%i\n", *(tab + i)); 
    }

}