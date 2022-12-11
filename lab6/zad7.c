#include <stdio.h>
int tab[10] = {1,2,3,4,5,6,7,8,9,10};
int pomoc=0;
int funkcja(int n,int pomoc){
    if(n == tab[pomoc])
    {
        printf("jest taka liczba. \n");
        return 0;
    }
    pomoc ++;
    return funkcja(n,pomoc);
}
int main(){
    int n;
    scanf("%i",&n);
    funkcja(n,pomoc);
    return 0;
}