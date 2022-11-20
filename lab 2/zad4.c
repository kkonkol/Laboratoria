#include <stdio.h>
int main()
{
    int liczby[5]= {1,2,3,4,5};
    int pomoc=0;
    for(int i=0;i<5;i++){
        pomoc=liczby[i]*liczby[i];
        printf("%i\n", pomoc);
    }
}