#include <stdio.h>
int x,z;
int funkcja(int x,int z)
{
    printf("%ld\n", (long)&x);
    printf("%ld\n", (long)&z);
}
int a;
int main(){

    int b=funkcja(x,z);
    printf("%ld\n", (long)&a);
    printf("%ld\n", (long)&b);
}