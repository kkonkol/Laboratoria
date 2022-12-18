#include <stdio.h>
int n=100;
void prog1(int tab[n]){
    if(n==0)
    {
        printf("Tablica nie ma żadnego znaku.\n");
        return 0;
    }
    for(int i=0;i<n;i++){
        printf("%i", tab[i]);
    }
    return 0;
}
void prog2(int tab[n],int liczba){
    for(int i=0;i<n;i++){
        if (tab[i]==NULL)
        {
            tab[i]==liczba;
        }
        else 
        {
            printf("Liczba jest niepoprawna lub wszystkie miejsca sa wykorzystane.\n");
        }
    }
    return liczba;
}
int main(){
    char tab[n];
    int x,liczba;
    for(;;){
    printf("Wybierz 0 jesli chcesz zakonczyc dzialanie programu.\n");
    printf("Wybierz 1 aby zobaczyc co zawiera tablica.\n");
    printf("Wybierz 2 aby dodac nowy element.\n");
    printf("Wybierz 3 aby usunac element w tabeli.\n");
    printf("Wybierz 4 aby dodac do siebie elementy z tabeli.\n");
    printf("Wybierz 5 aby wyswietlic drzewo binarne.\n");
    scanf("%i",&x);
    switch (x)
    {
    case 0:
        return 0;
    case 1:
        prog1(tab[n]);
    case 2:
        scanf("%i",&liczba);
        prog2(tab[n],liczba);
    case 3:

    default:
        printf("Operacja jest niemozliwa, wybierz jeszcze raz.\n");
    }

    }
}