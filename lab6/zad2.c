#include <stdio.h>

unsigned long NWD(int a,int b)
{
    if(b!=0) return NWD(b,a%b);
    
    return a;
}

int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",NWD(a,b));
    getchar();

    return 0;
}


