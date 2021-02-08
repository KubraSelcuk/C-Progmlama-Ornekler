#include<stdio.h>

int main()

{
    int ilk,son,miktar;
    float tutar,toplam,atiksu,fiyat=0.9128;

    printf("Ýlk gostergeyi giriniz<n^3>:");
    scanf("%d",&ilk);
    printf("Son gostergeyi giriniz<n^3>:");
    scanf("%d",&son);
    printf("----------\n");


    miktar=son-ilk;
    tutar=fiyat*miktar;
    atiksu=tutar/2.0;
    toplam=tutar+atiksu;


    printf("Tuketim miktari:%d\n",miktar);
    printf("Tuketim tutari:%.2f\n",tutar);
    printf("Atiksu bedeli<yuzde 50>:%.2f\n",atiksu);
    printf("Toplam:%.2f",toplam);

    return 0 ;

}
