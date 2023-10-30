#include <stdio.h>

double fungsi_utama(double a) {
    return 6*a*a*a+2;
}

void main(){
    int jumlah_subinterval;
    double hasil=0.0,batas_bawah,batas_atas,delta_x,x_i;

    printf("Masukan batas atas : "); scanf("%lf",&batas_atas);
    printf("Masukan batas bawah : "); scanf("%lf",&batas_bawah);
    printf("Masukan Jumlah subinterval: "); scanf("%d",&jumlah_subinterval);

    delta_x = (batas_atas-batas_bawah)/jumlah_subinterval;

    int i = 1;

    while (i<=jumlah_subinterval)
    {
        x_i = batas_bawah + i*delta_x;
        hasil += 2*fungsi_utama(x_i);
        i+=1;
    }
    hasil+=(fungsi_utama(batas_atas)+fungsi_utama(batas_bawah));
    hasil*=(delta_x/2);
    printf("Hasil perkiraan integral adalah %lf\n",hasil);
}