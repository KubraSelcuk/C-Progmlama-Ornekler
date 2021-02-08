#include<stdio.h>

int main()
{
int sayi,sayac=1;
float topam=0.0,ort;

printf("Lutfen bir sayi giriniz:");
scanf("%d",&sayi);

while(sayi!=-1)

{
    toplam=toplam+sayi;
    ort=toplam/sayac;
    printf("Ortalama=%.2f\n",ort);
    printf("Lutfen bir sayi giriniz:");
    scanf("%d",&sayi);
    sayac++;

}
}
