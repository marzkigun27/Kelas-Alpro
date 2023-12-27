#include <stdio.h>
#define MAX 5
/* Mendefinisikan fungsi untuk menampilkan elemen-elemen dari suatu array */
void TampilkanArray(int A[], int n) {
    for (int j=0; j<n; j++) {
    printf("A[%d] = %d\n", j, A[j]);
    }
}
int main() {
    /* Mendeklarasikan array dengan melakukan inisialisasi nilai ke dalamnya */
    int A[MAX] = { 40, 4, 30, 8, 71};
    int j, k; /* Mendeklarasikan variabel sebagai indeks pengulangan */
    int temp;
    /* Mendeklarasikan variabel sebagai variabel temporari */
    /* Menampilkan array sebelum diurutkan */
    printf("Sebelum pengurutan:\n");
    TampilkanArray(A, MAX);
    /* Melakukan proses pengurutan elemen array */
    for (j=0; j<MAX-1; j++) {
        for (k=MAX-1; k>=(j+1); k--) {
            if (A[k] < A[k-1]) {
            temp = A[k];
            A[k] = A[k-1];
            A[k-1] = temp;
            }
        }
    }
    printf("\n");
    /* Menampilkan array setelah diurutkan */
    printf("Setelah pengurutan: \n");
    TampilkanArray (A, MAX);
    return 0;
}