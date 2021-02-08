#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
 int sayi,toplam=0,i;
 float ortalama;

 srand(time(NULL));
 printf("sayilar\n");
 for(i=1;i<=6;i++)

 {
     sayi=rand()%100+1;
     toplam=toplam+sayi;
     printf("%d",sayi);
 }
 ortalama=toplam/6.0;
 printf("\nOrtalama\n");
 printf("%.2f",ortalama);






}

