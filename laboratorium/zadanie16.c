#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    int liczba;
    int licznik;
    licznik=0;
    for(int i=0;i<=3;i++)
    {
        scanf("%i", &liczba);
            if(liczba>0&&liczba<6)
        {
            if(liczba!=x)
                {
                    printf("To nie ta liczba.\n");
                    licznik++;
                    if(licznik==3)
                    {
                        printf("Skonczyly Ci sie proby.\n");
                        return 0;
                    }
                }
            else if(liczba==x)
                {   
                    printf("Odgadles.\n");
                    return 0;
                }
        }
        else
            {
                printf("Liczba jest z poza zakresu od 1-5.\n");
                licznik++;
                if(licznik==3)
                {
                    printf("Skonczyly Ci sie proby.\n");
                    return 0;
                }
            }
        }
}