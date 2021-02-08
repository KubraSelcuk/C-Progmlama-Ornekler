#include<stdio.h>

int main()
{

    int a;
    printf("Lutfen bir sayi giriniz");
    scanf("%d",&a);

    if(a>0)
        printf("Girdiginiz sayi pozitiftir");

    else if(a<0)
        printf("Girdiginiz sayi negatiftir");
    else
        printf("Girdiginiz sayi sifira esittir");

        return 0;




}
