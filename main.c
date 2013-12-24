
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i;
    char secim,fonsiyon;
    float sayi,j,toplam=0,ilkislem,k,ikinciislem=1,sonuc=0,ucislem;
    for(i=0;i<2;i++)
    {
            printf(" ex hesabi icin e\n sinx hesabi icin s\n cosx hesabi icin c giriniz.\n Seciminiz nedir :");
            scanf(" %c",&fonsiyon);
            printf("x degerini giriniz: ");
            scanf("%f",&sayi);

            if (fonsiyon=='e' || fonsiyon=='E')
            {
                for (j=0;j<3;j++)
                {

                   ilkislem = pow(sayi,j);

                   for(k=1;k<=j;k++)
                   {
                      ikinciislem = ikinciislem*k;
                   }
                   toplam = ilkislem/ikinciislem;
                   printf("%f\n",toplam);
                    sonuc+=toplam;

                }
            }
            else if(fonsiyon=='s' || fonsiyon=='S')
            {
                for (j=0;j<3;j++)
                {

                   ilkislem = pow(-1,j);
                   ucislem = pow(sayi,2*j+1);

                   for(k=1;k==j+2;k++)
                   {
                      ikinciislem = ikinciislem*k;

                   }
                   toplam = (ilkislem*ucislem)/ikinciislem;

                    sonuc+=toplam;

                }
            }
            else if(fonsiyon=='c' || fonsiyon=='C')
            {
                for (j=0;j<3;j++)
                {

                   ilkislem = pow(-1,j);

                   for(k=1;k<=j;k++)
                   {
                      ikinciislem = 2*ikinciislem*k;
                   }
                   ucislem = pow(sayi,2*j);
                   toplam = (ilkislem/ikinciislem)*ucislem;
                    sonuc+=toplam;
                }
            }
            else
            {
                printf("yanlis bir karakter girdiniz.");
            }

            printf(" %c ussu %0.0f = %f \n     Devam etmek istiyormusunuz : (e/h)",fonsiyon,sayi,sonuc);
            scanf(" %c",&secim);


                if(secim == 'e' || secim=='E')
                {
                    i =0;
                    toplam=0;
                    ikinciislem=1;
                    sonuc=0;
                }
                else
                {
                    i =2;
                    printf("Gule Gule. Tekrar bekleriz...");
                }
                          printf("\n --------------------\n");
    }

    return 0;
}
