#include<stdio.h>

int main()

{
    int vize,final;
    float ort;
     printf("Lutfen vize notunuzu giriniz:\n");
     scanf("%d",&vize);
     printf("Lutfen final notunuzu giriniz:\n");
     scanf("%d",&final);

     ort=vize*0.4+final*0.6;

     printf("Ogrencinin ortlamasi:%.2ftir\n",ort);

     if(ort>=60)
        {
            printf("Ogrenci dersi gecti\n");
        }

     else
     {
        printf("Ogrenci dersten kaldý\n");
     }


    return 0;
}

