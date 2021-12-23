#include <stdio.h>
#include <math.h>
float fs(float x)
{
    return cos(10*x)*cos(10*x);
}

int main()
{
    float x, y, a, b, L, Dx, JumlahPias, segitiga, persegi, jumlah;
    a=0;
    b=10;
    JumlahPias=100;
    Dx=(b-a)/JumlahPias;
    y=0;
    for (x=a+Dx;x<=b;x=x+Dx){
        persegi=Dx*y;
        segitiga=Dx*(fs(x)-y)/2;
        y=fs(x);
        jumlah=persegi+segitiga+jumlah;
    }
printf("Hasil dari integral dengan metode trapesium tersebut adalah \%f", jumlah);
    return 0;
}
