#include<stdio.h>

int main()

{

    int sayi,toplam=0,sayac=1;
    printf("Lutfen 5 adet sayi giriniz:");

    do{
        scanf("%d",&sayi);
        toplam=toplam+sayi;
        sayac++;
    }
    while(sayac<=5)

        printf("toplam =%d",&toplam);


}


