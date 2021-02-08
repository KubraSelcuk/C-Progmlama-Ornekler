#include<stdio.h>

int main()
{
  int saat;
  printf("Gunun saatini giriniz");
  scanf("%d",&saat);

  if(saat<6)
    printf("Iyi uykular");
  else if(saat>=6 && saat<=11)
    printf("Gunaydýn");
    else if(saat>=11 && saat<=17)
    printf("Iyi Gunler");
     else if(saat>=17 && saat<=22)
    printf("Iyi Aksamlar");
     else if(saat>=22 && saat<=24)
    printf("Iyi Geceler");
}
