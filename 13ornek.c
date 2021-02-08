#include<stdio.h>

int main()
{
    int a=5 ;
    float ondalikli=3.14;
    char harf=' a';
    char harf2= 'b';
    double uzun =2.154830;
    char c[15]="Benim ismim";

    printf("a sayisi=%d \n",a);
    printf("ondalikli sayi = %.3f\n",ondalikli);
    printf("Benim istediðim harf= %c %c %c\n",harf,harf2,harf);
    printf("%lf\n",uzun);
    printf("%s",c);


    return 0 ;
}
