#include <stdio.h>
#include <math.h>
//definisikan fungsi F(x)
float Fs(float x)
{
return x*x;
}
int main()
{
float a,b,n,Dx,total,nilaibawah,nilaiatas,ganjil,genap;
//memasukan parameter
printf("masukan batas bawah \n");
scanf("%f",&a);
printf("masukan batas atas \n");
scanf("%f",&b);
printf("masukan jumlah bias \n");
scanf("%f",&n);
n=(n/2)*2; //mengubah jumlah pias menjadi genap
Dx=(b-a)/n;
int x; //mengubah data type x menjadi integer, karena fungsi % hanya bisa bekerja pada tipe data fungsi integer
for(x=a;x<=b;x=x+Dx){
    if (x==a){
        nilaibawah=Fs(x);
    }
    else if (x==b){
        nilaiatas=Fs(x);
    }
    else if (x%2==1){
        ganjil=4*Fs(x)+ganjil;
    }
    else if (x%2==0){
        genap=2*Fs(x)+genap;
    }
}
total=(Dx/3)*(nilaibawah+nilaiatas+ganjil+genap);
printf("Maka hasil integral Simsons dari x dengan interval dari %f sampai %f dengan dx sebesar %f adalah %f",a,b,Dx,total);
return 0;
}
