#include <stdio.h>
#include <stdlib.h>

int main(){
    int c;
    float BMI,BB,TB;
    
    do {
        printf("(1)Laki-laki\n(2)Perempuan\nPilih Jenis Kelamin : "); scanf("%d",&c);
        while (c>=1 && c<=2) {
           printf("Masukan Berat Badan : "); scanf("%f",&BB);
           printf("Masukan Tinggi Badan : "); scanf("%f",&TB);
           TB/=100;
           BMI = BB/(TB*TB);
           c+=3;
        }
        c-=3;
        switch (c)
        {
        case 1 :
            if (BMI >= 17 && BMI <= 23) {
                printf("BMI = %.2f\n",BMI);
                printf("Badan anda ideal\n");
            } else {
                printf("BMI = %.2f\n",BMI);
                printf("Badan anda tidak ideal\n");
            }
            break;
        case 2 :
            if (BMI >= 18 && BMI <= 25) {
                printf("BMI = %.2f\n",BMI);
                printf("Badan anda ideal\n");
            } else {
                printf("BMI = %.2f\n",BMI);
                printf("Badan anda tidak ideal\n");
            }
            break;
        default:
            printf("Pilihan mu ga ada, ketik angka 1 atau 2 untuk memilih jenis kelamin");
            system("cls");
            printf("lanjut ga nih?? klo lanjut :");
            system("pause");
            system("cls");
        }
    } while (c<1 || c>2);
}
