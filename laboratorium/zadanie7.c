#include <stdio.h>
#include <math.h>
int main()
{
    int day;
    int month;
    int year;
    scanf("%i", &day);
    scanf("%i", &month);
    scanf("%i", &year);
    
    if(day<=31&&day>0&&month==1&&year>0){
        printf("Data jest poprawna.\n");
    }
    else if(day<=28&&day>0&&month==2&&year>0){
        printf("Data jest poprawna.\n");
    }
    else if(day==29&&month==2&&year%2==0)
    {
        printf("Data jest poprawna.\n");
    }
    else if(day<=30&&day>0&&month==3&&year>0) printf("Data jest poprawna.\n");
    else if(day<=31&&day>0&&month==4&&year>0) printf("Data jest poprawna.\n");
    else if(day<=30&&day>0&&month==5&&year>0) printf("Data jest poprawna.\n");
    else if(day<=31&&day>0&&month==6&&year>0) printf("Data jest poprawna.\n");
    else if(day<=30&&day>0&&month==7&&year>0) printf("Data jest poprawna.\n");
    else if(day<=31&&day>0&&month==8&&year>0) printf("Data jest poprawna.\n");
    else if(day<=30&&day>0&&month==9&&year>0) printf("Data jest poprawna.\n");
    else if(day<=31&&day>0&&month==10&&year>0) printf("Data jest poprawna.\n");
    else if(day<=30&&day>0&&month==11&&year>0) printf("Data jest poprawna.\n");
    else if(day<=31&&day>0&&month==12&&year>0) printf("Data jest poprawna.\n");
    else  printf("Data nie jest jest poprawna.\n");
    



}