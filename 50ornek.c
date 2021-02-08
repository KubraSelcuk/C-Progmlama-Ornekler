#include<stdio.h>

int main ()

{

int i,k,asal=1;

for(i=1;i<=100;i++)
{
    for(k=2;k<i;k++)
    {
        if(i%k==0)

        {
            asal=0;
            break;
        }
    }
    if(asal && i!=1)
        printf(" %d",i);

    asal=1;

}
}

