#include<stdio.h>

int main()
{

int bababoy,anneboy;
char cinsiyet;
float hedefboy;

printf("Cocugun cinsiyetini giriniz (e,E-k,K):");
scanf("%c",&cinsiyet);

switch(cinsiyet)
{
    case 'e':
    case 'E':

    printf("Babasinin boyunu giriniz:\n");
    scanf("%d",&bababoy);
    printf("Annesinin boyunu giriniz:\n");
    scanf("%d",&anneboy);

    hedefboy =(anneboy+bababoy+13)/2.0;
    printf("Hedefboy=  %.2f\n",hedefboy);


if(hedefboy>175)


printf("Turkiye ortalamasýndan buyuktur\n");

else if(hedefboy<175)

    printf("Turkiye ortalamasýndan kucuktur\n");

else
    printf("Turkiye ortalamasina esittir");


    break;

    case 'k':
    case 'K':

    printf("Annesinin boyunu giriniz:");
    scanf("%d",&anneboy);
    printf("Babasinin boyunu giriniz:");
    scanf("%d",&bababoy);

    hedefboy=(anneboy+bababoy-13)/2.0;
    printf("Hedefboy=%.2f\n",hedefboy);

    if(hedefboy>163)
    printf("Türkiye ortalamasindan buyuktur\n");
else if(hedefboy<165)
    printf("Turkiye ortalamasindan kucuktur\n");

else
    printf("Turkiye ortalamasýna esittir");

    break;

    default:
        printf("Yanlis bilgileri girdiniz");








}
}
