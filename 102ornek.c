#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int sayi;
    srand(time(NULL));
    sayi= rand()%50+1;
    printf("%d",sayi);
}
