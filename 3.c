#include<stdio.h>

struct dogum_gunu{
    int gun;
    int ay;
    int yil;
    char isim[30];
};




int main()
{

    struct dogum_gunu kisi = {{10,10,1999}, "ali"};

    printf("%d %d %d - %s\n", kisi.gun, kisi.yil, kisi.ay, kisi.isim);
}
