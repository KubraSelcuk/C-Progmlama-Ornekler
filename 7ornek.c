#include<stdio.h>

int main()

{

int sayi,a,b,c,d;

printf("Lutfen 4 basamakli sayi giriniz:");
scanf("%d",&sayi);
printf("Verilen %d sayisinda:\n",sayi);

a=sayi/1000;
b=(sayi-(a*1000))/100;
c=(sayi-(a*1000)-(b*100))/10;
d=sayi%10;

printf("%d tane binler\n",a);
printf("%d tane yuzler\n",b);
printf("%d tane onlar\n",c);
printf("%d tane birler",d);

return 0;

}

