#include<stdio.h>

int main()
{
int i,sayi,toplam=0,sayac=0
float ort;

printf("Lutfen 5 tane sayi giriniz:");


for(i=1;i<=5;i++)
{
    scanf("%d",&sayi);
    if(sayi%2==1)
    {
        toplam=toplam+sayi;
        sayac++;
    }
}
    ort=toplam*1.0/sayac;
    printf("Ortalama=%.2f",ort);


}
