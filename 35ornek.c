#include<stdio.h>

int main()

{

int sayi=1,toplam =0;

A:
    toplam=toplam+sayi;
    sayi++;
    if(sayi<=10)
        goto A;
            printf("Toplam=%d",toplam);

}
