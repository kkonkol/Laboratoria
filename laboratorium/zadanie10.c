#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    int b;
    int c;

    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    
    if(a>b&&a>c)
    {
        if(b+c>a)
        {
            printf("Z podanych odcinkow mozna utworzyc trojkat.\n");
        }
        else {
            printf("Z podanych odcinkow nie mozna utworzyc trojkat.\n");
        }
    }
    else if(b>a&&b>c)
    {
        if(a+c>b)
        {
            printf("Z podanych odcinkow mozna utworzyc trojkat.\n");
        }
        else {
            printf("Z podanych odcinkow nie mozna utworzyc trojkat.\n");
        }
    }
    else if(c>a&&c>b)
    {
        if(a+b>c)
        {
            printf("Z podanych odcinkow mozna utworzyc trojkat.\n");
        }
        else {
            printf("Z podanych odcinkow nie mozna utworzyc trojkat.\n");
        }
    }
}