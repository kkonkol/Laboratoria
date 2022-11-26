#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int tab[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(i==1 || j==0)
                tab[i][j]=1;
            else 
                tab[i][j]= tab[i-1][j-1] + tab[i-1][j];  
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
}