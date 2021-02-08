#include<stdio.h>
char harfnotu(int vize,int final)
{
    float ortalama;
    char harf;

    ortalama=vize*0.4+final*0.6;
    if(ortalama<=50)
        harf='C';
        else if(ortalama<=80)
        harf='B';
      else if(ortalama<=100)
        harf='A';
        return harf;

}
int main()
{
    int vize,final;
    printf("Vize notunuzu giriniz:");
    scanf("%d",&vize);
    printf("Final notunuzu giriniz:");
    scanf("%d",&final);

    printf("Harf notu=%c",harfnotu(vize,final));

}
