#include<stdio.h>

int main()

{
    int sayi;

    printf("Lutfen bir sayi giriniz:");
    scanf("%d",&sayi);

    switch(sayi)
    {
    case 1:
        printf("Bir");
        break;
    case 2 :
        printf("�ki");
        break;
    case 3:
        printf("Uc");
        break;
    case 4 :
        printf("Dort");
        break;
    case 5:
        printf("Bes");
        break;

    default:
        printf("Yanl�s girdiniz Lutfen tekrar deneyiniz.");

        return 0;

    }
}
