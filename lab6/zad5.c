#include <stdio.h>

int funkcja(int n)
{
    if(n>0){
        funkcja(n/2);
        printf("%d",n%2);
    }
}
int main(){
    int n;
    scanf("%i",&n);
    funkcja(n);

    return 0;
}