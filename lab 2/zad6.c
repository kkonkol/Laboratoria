#include <stdio.h>
int main(){
    int tab[][2]= {
        {1,0},{0,1}
    };

    printf("|--|\n");
    for(int i=0;i<=1;i++)
    {
        printf("|");
        for(int j=0;j<2;j++)
        {
            if(tab[i][j]==1) printf("x");
            else if(tab[i][j]==0) printf(" ");
        }
        printf("|\n");
    }
    printf("|--|\n");
}