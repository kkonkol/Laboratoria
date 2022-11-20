#include <stdio.h>
int main(){
    int tab[2][2]= {
        {1,0},{0,1}
    };

    for(int i=-1;i<=2;i++)
    {
        printf("|");
        for(int j=0;j<2;j++)
        {
            if(tab[i][j]==1) printf("x");
            else if(tab[i][j]==0) printf(" ");
            else printf("-");
        }
        printf("|");
        printf("\n");
    }
}