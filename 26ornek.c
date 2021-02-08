#include<stdio.h>

int main()
{
    int r,k,ke,ut,uy,a,uty;
    char secim;
    float da,ua;


    printf("(D veya d)Daire\n");
    printf("(K veya k)Kare\n");
    printf("(U veya u)Ucgen\n");
    printf("---------\n");
    printf("Seciminiz:");
    scanf("%c",&secim);
    printf("------\n");

    switch(secim)
    {

    case'd':
    case'D':
    printf("Lutfen dairenin yaricapini giriniz:\n");
    scanf("%d",&r);
    da=r*r*3.14;
    printf("Alan= %f",da);
    break;


    case'k':
    case'K':
    printf("Karenin iki kenarini giriniz:");
    scanf("%d",&a);
    ke=k*k;
    printf("Kenar= %d",ke);
    break;

    case'u':
    case'U':
    printf("Ucgenin once tabanini sonra yuksekligini giriniz:");

    scanf("%d%d",&ut,&uy);
    ua=(ut*uy)/2.0;
      printf("Ucgenin tabani ve yuksekligi= %.2d",uty);
    break;

    default:
        printf("Yanlis girdiniz");


        }
}
