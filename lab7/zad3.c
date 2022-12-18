#include <stdio.h>
void f(int *a,int *b){
    *a = *b;
    *b = *a;
}
int main(){
    int a=100,b=50;
    printf("%i\n", a);
    printf("%i\n", b);
    f(&a,&b);
    printf("%i\n", a);
    printf("%i\n", b);
}