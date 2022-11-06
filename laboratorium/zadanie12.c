#include <stdio.h>
#include <math.h>
int main()
{
    int a;

    scanf("%i", &a);

    if(a%2==0)
    {
        printf("Liczba jest podzielna przez 2.\n");
        return 0;
    }
    else if(a%3==0)
    {
        printf("Liczba jest podzielna przez 3.\n");
        return 0;
    }
    else if(a%4==0)
    {
        printf("Liczba jest podzielna przez 4.\n");
        return 0;
    }
    else if(a%5==0)
    {
        printf("Liczba jest podzielna przez 5.\n");
        return 0;
    }
    else if(a%5==0)
    {
        printf("Liczba jest podzielna przez 6.\n");
        return 0;
    }
    else {
        printf("Liczba nie jest podzielna przez zadna liczbe z przedzialu 2-6.\n");
    }
    
}