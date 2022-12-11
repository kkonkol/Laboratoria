#include <stdio.h>
int tab[9] = {1,2,3,4,5,6,7,8,9,10};
int funkcja(int l,int p, int szukana){
    if(l>p) return -1;

    int mid = (l+p)/2;

    if(szukana==tab[mid])
        return mid;
    if(szukana <tab[mid])
        return funkcja(l,mid-1,szukana);
    else
        return funkcja(l,mid+1,szukana);
}
int main(){
    int szukana;
    scanf("%i",&szukana);
    int pozycja = funkcja(0,9,szukana);

    if(pozycja ==-1) printf("Nie ma takiej liczby.\n");
    else printf("%i\n", pozycja);
    return 0;
}