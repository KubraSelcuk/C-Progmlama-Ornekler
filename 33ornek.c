#include<stdio.h>

int main()
{
int sayi,fakt=1;

printf("Lutfen bir sayi giriniz:");
scanf("%d",&sayi);

while(sayi>=1)

{
    fakt=fakt*sayi;
    sayi--;
}

printf("Faktoriyel=%d",fakt);
}
