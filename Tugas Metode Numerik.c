#include <stdio.h>
#include <math.h>

float Fs(float x)
{
return cos(x)*x*x;

}
int main()
{
float L,a,b,JumlahPias,Dx;
a=-1;
b=1;
JumlahPias = 500;
Dx=(b-a)/JumlahPias;

L=0;
float x;
for (x=a+Dx;x<=b;x=x+Dx)
{
    L=L+Fs(x);
}
L=Dx*L;
printf("Hasil Integral \%f",L);

return 0;
}
