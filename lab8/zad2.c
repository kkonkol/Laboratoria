#include <stdio.h>
int main(){
    FILE *parzyste =fopen("C:\\Users\\aresh\\OneDrive\\Dokumenty\\GitHub\\Laboratoria\\lab8\\pliki\\parzyste.txt", "w");
    FILE *nieparzyste =fopen("C:\\Users\\aresh\\OneDrive\\Dokumenty\\GitHub\\Laboratoria\\lab8\\pliki\\nieparzyste.txt", "w");
    int ile=0,n=0;
    scanf("%d",&ile);
    int tab[ile];
    for(int i=0;i<ile;i++){
        scanf("%d",&n);
        tab[i]=n;
    }
    for(int i=0;i<ile;i++){
        if(tab[i]%2==0)
        {
            fwrite(tab,sizeof(tab),1,parzyste);        }
        else
        {
        fwrite(tab,sizeof(tab),1,nieparzyste);
        }
    }
    fclose(nieparzyste);
    fclose(parzyste);
}