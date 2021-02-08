#include<stdio.h>

int main ()

{

int sayi,i,k;

printf("5 adet sayi giriniz:");
for(i=1;i<=5;i++)

{
    scanf("%d",&sayi);
    for(k=1;k<=sayi;k++)
    {
        printf("*");
    }
    printf("\n");
}
}
