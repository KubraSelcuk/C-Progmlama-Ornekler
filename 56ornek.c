#include<stdio.h>

void tekcift(int a)
{

if(a%2==0)
    printf("Bu say� cifttir.");
    else
    printf("Bu say� tektir");
}

int main()
{
  int sayi;
  printf("Bir sayi giriniz:");
  scanf("%d",sayi);
  tekcift(sayi);
  printf("\n");
  printf("Bir sayi giriniz:");
  tekcift(10);
}




