#include<stdio.h>

int main()
{
    int a;
    printf("Bir sayi giriniz");
    scanf("%d",&a);

    if(a>0)
    {
        printf("a sayisi 0 dan buyuktur");
    }
    if(a<0)
    {
        printf("a sayisi 0 dan kucuktur");

    }
    if(a==0)
    {
        printf("a sayisi 0'a esittir");
    }
}
