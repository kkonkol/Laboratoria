#include <stdio.h>
int main(){
    FILE *plik =fopen("C:\\Users\\aresh\\OneDrive\\Dokumenty\\GitHub\\Laboratoria\\lab8\\pliki\\liczby.txt", "r");
    int pomoc1,pomoc2,max=0,min;
    int tab[100],temp;
    if(plik==NULL)
    {
        exit(-1);
    }
        for(int i=0;i<100;i++)
        {
            fscanf(plik,"%ld",&tab[i]);
        }
        min=tab[0];
    for(int i=0;i<100;i++){
        if(max<tab[i])
            max=tab[i];
        if(min>tab[i])
            min=tab[i];
    }    
    printf("%i\n",max);
    printf("%i",min);

    fclose(plik);

}