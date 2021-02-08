#include<stdio.h>


void dikdortgen(int kisa,uzun)

{
    int alan;
    alan=kisa*uzun;
    printf("Alan=%d",alan);
}
int main()
{
    int kisa,uzun;
    printf("Kisa kenari giriniz");
    scanf("%d",&kisa);
    printf("Uzun kenari giriniz");
    scanf("%d",&uzun);
    dikdortgen(kisa,uzun);




}
