#include<stdio.h>

int main()
{


int sayi,fakt=1;

printf("Lutfen bir sayi giriniz:");
scanf("%d",&sayi);

do{
    fakt=fakt*sayi;
    sayi--;

}
while(sayi>=1);
printf("Faktoriyel=%d",fakt);
}
