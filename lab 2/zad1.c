#include <stdio.h>
int main()
{
    int x;
    int suma;
    suma=0;
    scanf("%i", &x);
    for(int i=1;i<=x;i++)
    {
        suma+=i*i;
    }
    printf("%i\n", suma);
    return 0;
}