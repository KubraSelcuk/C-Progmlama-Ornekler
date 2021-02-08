#include<stdio.h>

void diziyaz(int a[],intx)
{
    for(int indis=0;indis<x;indis++)
    {
        printf("%d\n",a[indis]);

    }
}
int main()
{
    int sayilar[5]={1,2,3,4,5};
    diziyaz(sayilar,5);
}
