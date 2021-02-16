#include<stdio.h>
#include<stdlib.h>


struct dogum_gunu{

int gun;
int ay;
int yil;



};

struct kisi{

struct dogum_gunu dg;
char isim[40];

};
int main()
{
    typedef struct kisi kisi_bilgisi;
    kisi_bilgisi ali;
    ali.dg.ay=10;
    printf("%d",ali.dg.ay);
}




