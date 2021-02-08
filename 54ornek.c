#include<stdio.h>

void toplama()
{
    int a,b,toplam;
    printf("1.sayiyi giriniz");
    scanf("%d",&a);
    printf("2.sayiyi giriniz");
    scanf("%d",&b);
    toplam=a+b;
    printf("Toplam=%d",toplam);
}
int main()
{
    toplama();
}
