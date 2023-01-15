#include <stdio.h>
#include <string.h>
struct x
    {
        char imie[10];
        char nazwisko[20];
        int numer;
    };
int main(){
    struct x s;
    struct x s2;
    strcpy(s.imie, "Bartek");
    strcpy(s.nazwisko, "Tak");
    s.numer = 897678567;
    
    strcpy(s2.imie, "stefan");
    strcpy(s2.nazwisko, "NIe");
    s2.numer = 787098453;

    printf("%s\n ", s.imie);
    printf("%s\n ", s.nazwisko);
    printf("%d\n ", s.numer);

    printf("%s\n ", s2.imie);
    printf("%s\n ", s2.nazwisko);
    printf("%d\n ", s2.numer);

}