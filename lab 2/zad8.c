#include <stdio.h>
int main(){
    int a,b,suma=0;
    scanf("%i", &a);
    scanf("%i", &b);
    int pomoc=a;
    int pomoc2=0;
    for(int i=0;i<=1000;i++)
    {
        
        for(int j=1;j<=pomoc;j++)
        {
            if(pomoc%j==0) suma++;
        }
        if(suma==2)
        {
            printf("%i\n",pomoc);
            pomoc2++;
        }
        pomoc++;
        suma=0;
        if(pomoc2==b) break;
    }
}