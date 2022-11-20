#include <stdio.h>
int main(){
    int a,b;
    int suma;
    int pomoc;
    suma=0;
    scanf("%i" ,&a);
    scanf("%i" ,&b);
    pomoc=a;
    for(int i=1;i<b;i++)
    {   
        pomoc=pomoc*a;
    }
    printf("%i\n", pomoc);
}