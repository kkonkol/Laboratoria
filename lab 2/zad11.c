#include <stdio.h>
int main(){
    int tab[6][11] ={
        {0,0,0,0,0,1,0,0,0,0,0},
        {0,0,0,0,1,0,1,0,0,0,0},
        {0,0,0,1,0,2,0,1,0,0,0},
        {0,0,1,0,3,0,3,0,1,0,0},
        {0,1,0,4,0,6,0,4,0,1,0},
       {1,0,5,0,10,0,10,0,5,0,1}
    };
    for(int i=0;i<=5;i++)
    {
        for(int j=0;j<=10;j++)
        {
            if(tab[i][j]==0) printf(" ");
            else printf("%i", tab[i][j]);
        }
        printf("\n");
    }
}