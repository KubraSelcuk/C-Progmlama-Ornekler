#include<stdio.h>


int main(){

        int mDiziBir[2][2], mDiziIki[2][2], mDiziSonuc[2][2];

        printf("Birinci Matrisi Giriniz\n");
        for(int i=0; i<2; i++)
                for(int j=0; j<2; j++){
                        printf("[%d][%d]= ", i+1, j+1);
                        scanf("%d", &mDiziBir[i][j]);
                }

        printf("ikinci Matrisi Giriniz\n");
        for(int i=0; i<2; i++)
                for(int j=0; j<2; j++){
                        printf("[%d][%d]= ", i+1, j+1);
                        scanf("%d", &mDiziIki[i][j]);
}                }
