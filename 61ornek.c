#include<stdio.h>

int topla(int sayi1,int sayi2)
{


    return sayi1+sayi2;
}
int cikar(int x,int y)
{

    return x-y;
}
int main()
{
    int sayi1,sayi2;
    printf("1.sayiyi giriniz:");
    scanf("%d",&sayi1);
    printf("2.sayiyi giriniz:");
    scanf("%d",&sayi2);

    printf("Toplam = %d\n",topla(sayi1,sayi2));
    printf("Fark = %d",cikar(sayi1,sayi2));



}
