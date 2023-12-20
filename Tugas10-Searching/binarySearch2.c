#include <stdio.h>
#include <time.h>
#define MAX_ELEMEN 100

int main(){
    int BIL[MAX_ELEMEN];
    int N, X;
    clock_t start, end;
    double cpu_time_used;

    start = clock(); // Waktu awal
    printf("Masukkan banyaknya elemen yang diinginkan: ");
    scanf("%d", &N);
    for (int j=0; j < N; j++)
    {
        printf("BIL[%d] = ",j);
        scanf("%d", &BIL[j]);
    }
    printf("Masukkan nilai yang akan dicari: ");
    scanf("%d", &X);
    int k=0;
    while ((k<N) && (BIL[k] != X))
    {
        k++;
    }

    if (BIL[k] == X)
    {
        printf("%d ditemukan dalam array, yaitu pada indeks ke-%d", X, k);
    }else{
        printf("%d tidak ditemukan dalam array\n", X);
    }
    end = clock(); // Waktu akhir
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC; // Perhitungan waktu yang digunakan
    printf("Waktu yang diperlukan: %f detik\n", cpu_time_used);
    return 0;
}