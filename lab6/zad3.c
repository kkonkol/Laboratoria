#include <stdio.h>

int funkcja(int n){
    if(n<2) return 1;
    else{
        printf("%d",n);
        printf(" ");
        return funkcja(n-1);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",funkcja(n));
    
    return 0;
}