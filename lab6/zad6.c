#include <stdio.h>
int suma=0;
int funkcja(int n){
    if(n>1){
        suma= suma + n%10;
        return funkcja(n/10);
    }
    printf("%i\n", suma);
}
int main(){
    int n;
    scanf ("%i", &n);
    funkcja(n);
    return 0;
}