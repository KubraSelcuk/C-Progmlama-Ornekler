#include<stdio.h>

int main()
{

int vize,final;
float ort;
char harf;

printf("Lutfen vize notunuzu giriniz:");
scanf("%d",&vize);
printf("Lutfen final notunuzu giriniz:");
scanf("%d",&final);

ort=vize*0.4+final*0,6;
if(ort<50)
    harf='F';
else if(ort<60)
harf='D';
else if(ort<70)
harf='C';
else if(ort<80)
harf='B';
else
    harf='A';

    printf("Ogrencinin basari notu %.2f Harf Notu:%c",ort,harf);

    return 0;
}





