#include <stdio.h>
int main(){
    int x;
    int pomoc=0;
    scanf("%i", &x);
    for(int i=1;i<=x;i++)
    {
        if(x%i==0) pomoc++;
    }
    if(pomoc==2) printf("Liczba jest liczba pierwsza.\n");
    else printf("Niestety.\n");
}