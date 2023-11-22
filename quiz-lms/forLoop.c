#include<stdio.h>

void main(){
    float tugas, quiz, uts, uas, akhir;

    for (int i = 1; i <=3; i++){
        scanf("%f",&tugas);
        scanf("%f",&quiz);
        scanf("%f",&uts);
        scanf("%f",&uas);

        akhir =((tugas*10)/100) + ((quiz*20)/100) + ((uts*30)/100) + ((uas*40)/100);
        printf("Mahasiswa ke-%d\n",i);
        printf("Nilai akhir : %f\n", akhir);

        if (akhir > 90 && akhir <= 100) printf("Huruf mutu: A\n");
        if (akhir > 85 && akhir <= 90) printf("Huruf mutu: A-\n");
        if (akhir > 80 && akhir <= 85) printf("Huruf mutu: B+\n");
        if (akhir > 75 && akhir <= 80) printf("Huruf mutu: B\n");
        if (akhir > 70 && akhir <= 75) printf("Huruf mutu: B-\n");
        if (akhir > 65 && akhir <= 70) printf("Huruf mutu: C+\n");
        if (akhir > 60 && akhir < 65) printf("Huruf mutu: C\n");
        if (akhir > 55 && akhir < 60) printf("Huruf mutu: C-\n");
        if (akhir > 50 && akhir < 55) printf("Huruf mutu: D\n");
        if (akhir >= 0 && akhir <= 45) printf("Huruf mutu: E\n");
    }
}