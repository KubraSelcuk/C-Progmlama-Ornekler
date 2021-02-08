#include<stdio.h>
#include<stdlib.h>

int main()
{
    double sayi,sonuc1,sonuc2;

    printf("Sayi giriniz:");
    scanf("%lf",&sayi);
    sonuc1=floor(sayi);
    printf("Sonuc:%lf",sonuc1);

    printf("\n");


    sonuc2=ceil(sayi);
    printf("Sonuc:%lf",sonuc2);




}
