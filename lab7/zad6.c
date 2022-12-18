#include <stdio.h>
int tab[10];
int funkcja(int *a,int *b){
    for(int i=0;i<*b-*a;i++)
    {
        *(tab + i) = i;
    }
}
int main(){
    int a=0,b=10;
    funkcja(&a,&b);
    for(int i=0;i<b-a;i++){
        printf("%d\n",*(tab+i));
    }
}