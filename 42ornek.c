#include<stdio.h>

int main()

{

    int i,bireysayisi,yas;
    float toplam=0.0;
    printf("Ailedeki birey sayisi:");
    scanf("%d",&bireysayisi);

    printf("%d kisinin yaslarini giriniz:",bireysayisi);

    for(i=1;i<=bireysayisi;i++)
    {
        scanf("%d",&yas);
        if(yas>=0 && yas<=10)
            toplam=toplam+1;
         else if(yas>=11 && yas<=17)
            toplam=toplam+1.5;
            else if(yas>=18 && yas<=26)
            toplam=toplam+4.75;
             else if(yas>=27 && yas<=50)
            toplam=toplam+7;
            else if(yas>=51 && yas<=100)
            toplam=toplam+5.25;


    }
       printf("Odenecek toplam ucret %.2f TL dir",toplam);

}
