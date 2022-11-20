#include <stdio.h>
int main(){
    int a,b;
    int pomoc,suma=1;

    scanf("%i", &a);
    scanf("%i", &b);
    pomoc=a;
    do 
    {
        pomoc=a*pomoc;
        suma++;
    }while(pomoc<b);
    printf("%i\n", suma);
}