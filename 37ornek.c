#include<stdio.h>

int main()
{
  int sayi,fakt=1,i;
  printf("Lutfen bir sayi giriniz:");
  scanf("%d",&sayi);

  for(i=sayi;i>1;i--)
  {
      fakt=fakt*i;
  }
  printf("Faktoriyel=%d" ,fakt);
}

