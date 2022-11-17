#include <stdio.h>
#include <math.h>
int main()
{
    char rad[2];

    scanf("%c", rad);
    
    if(rad[0]==1&&rad[1]=='/'&&rad[2]==6)
    {
        printf("Kat w stopniach wynosi 30.\n");
    }
    else if(rad=="1/4")
    {
        printf("Kat w stopniach wynosi 45.\n");
    }
    else if(rad==1/3)
    {
        printf("Kat w stopniach wynosi 60.\n");
    }
    else if(rad==1/2)
    {
        printf("Kat w stopniach wynosi 90.\n");
    }
    else if(rad==0)
    {
        printf("Kat w stopniach wynosi 0.\n");
    }
    else{
        printf("Kat w stopniach wynosi ?.\n");
    }
}