#include <stdio.h>
int n=100;
void prog1(int tab[n]){
    int x=0;
    for(int i=0;i<n;i++)
    {
        if(tab[n]=='\0')
        {
            x++;
            if(x==n)
            {
                printf("Tablica nie ma żadnego znaku.\n");
            }
        }
        else{
            printf("%i",tab[i]);
            printf(", ");
        }
        return ;
    }
}
void prog2(int tab[n],int liczba){
    scanf("%i",&liczba);
    for(int i=0;i<n;i++){
        if (tab[i]=='\0')
        {
            tab[i]==liczba;
        }
        else 
        {
            printf("Liczba jest niepoprawna lub wszystkie miejsca sa wykorzystane.\n");
        }
        return ;
    }

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
        printf("See you soon.\n");
        return 0;
    case 1:
        prog1(tab[n]);
    case 2:
        prog2(tab[n],liczba);
    case 3:
    
    default:
        printf("\n");
        printf("Operacja jest niemozliwa, wybierz jeszcze raz.\n");
        printf("\n");
    }
    }
}