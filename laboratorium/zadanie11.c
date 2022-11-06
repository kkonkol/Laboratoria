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
        if(b*b+c*c==a*a)
        {
            printf("Z podanych odcinkow mozna utworzyc trojkat prostokatny.\n");
        }
        else {
            printf("Z podanych odcinkow nie mozna utworzyc trojkat prostokatny.\n");
        }
    }
    else if(b>a&&b>c)
    {
        if(a*a+c*c==b*b)
        {
            printf("Z podanych odcinkow mozna utworzyc trojkat prostokatny.\n");
        }
        else {
            printf("Z podanych odcinkow nie mozna utworzyc trojkat prostokatny.\n");
        }
    }
    else if(c>a&&c>b)
    {
        if(a*a+b*b==c*c)
        {
            printf("Z podanych odcinkow mozna utworzyc trojkat prostokatny.\n");
        }
        else {
            printf("Z podanych odcinkow nie mozna utworzyc trojkat prostokatny.\n");
        }
    }
}