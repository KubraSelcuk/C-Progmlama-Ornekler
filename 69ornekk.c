#include<stdio.h>

int main()

{
    int dizi[5]={13,5,9,0,26};
    int yedek;

    for(int gecit=1; gecit<5;gecit++)
        for(int i=0; i<4;i++)
        if(dizi[i]>dizi[i+1])
        {
            yedek=dizi[i];
            dizi[i]=dizi[i+1];
            dizi[i+1]=yedek;

        }
        for(int i=0;i<5;i++)
        {
            printf("%d\n",dizi[i]);
        }
}
