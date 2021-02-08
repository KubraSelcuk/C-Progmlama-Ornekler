#include<stdio.h>

int main()
{
    int deger=10;
    printf("int icin ayrilan yer:%d\n", sizeof(deger));
    printf("degisken icin ayrilan yerin adresi:%d\n", &deger);
    printf("degisken icindeki deger:%d\n", deger);

    int *ptr;

    printf("ptr icin ayrilan bellek miktari:%d\n", sizeof(ptr));
    printf("ptr icin ayrilan yerin adresi:%d\n", &ptr);

    ptr = &deger;

    printf("ptr icindeki deger:%d\n", ptr);

    printf("ptrnin gosterdigi degiskenin icindeki deger:%d\n", *ptr);

    *ptr = 15;

    printf("ptrnin gosterdigi degiskenin icindeki deger:%d\n", *ptr);
    printf("degisken icindeki deger:%d\n", deger);
}
