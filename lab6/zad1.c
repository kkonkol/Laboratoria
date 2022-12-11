#include <stdio.h>

unsigned long silnia(unsigned int);
int main()
{
    unsigned int n;
    scanf("%d",&n);
    printf("%d",silnia(n));
    getchar();

    return 0;
}

unsigned long silnia(unsigned int i)
{
    if(i<=1) return 1;
    else return i*silnia(i-1);
}

