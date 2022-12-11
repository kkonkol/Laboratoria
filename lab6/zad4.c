#include <stdio.h>
int funkcja(int n){
    if(n<2) return funkcja(n-1) + funkcja(n-2);
}

int main(){
   int n;
   scanf("%i",&n);
   printf("%i",funkcja(n));

   return 0; 
}