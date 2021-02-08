#include<stdio.h>

int main ()
{
    int yukseklik,taban;
    float alan;

    printf("Ucgenin yuksekligini giriniz:");
    scanf("%d", &yukseklik);
    printf("Ucgenin tabanini giriniz:");
    scanf("%d", &taban);

printf("------\n");
    alan=(taban*yukseklik)/(2.0);


    printf("Ucgenin Alani:%.2f",alan);
    return 0;

}









