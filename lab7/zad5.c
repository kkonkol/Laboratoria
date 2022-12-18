#include <stdio.h>
void funkcja(int *a,int *b,int *c,int *pom){
    if(*b<*a&&*b<*c){
        *pom=*a;
        *a=*b;
        *b=*pom;
    }   
    if(*c<*a&&*c<*b)
    {
        *pom=*a;
        *a=*c;
        *c=*pom;
    }
    if(*c<*b){
        *pom=*b;
        *b=*c;
        *c=*pom;
    }

}
int main(){
    int a,b,c,pom;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    funkcja(&a,&b,&c,&pom);
    printf("%d",a);
    printf(" ");
    printf("%d",b);
    printf(" ");
    printf("%d",c);
}