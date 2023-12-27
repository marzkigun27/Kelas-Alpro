#include <stdio.h>
#include <time.h>
#define SIZE 100000

size_t linearSearch(const int array[],int key, size_t size);

int main(){
    int a[SIZE];
    clock_t start, end;
    double cpu_time_used;

    for(size_t x= 0; x<SIZE;++x){
        a[x] = 2*x+1;
    }
    printf("Masukan angka integer :");
    int searchKey;
    scanf("%d", &searchKey);

    start = clock(); // Waktu awal
    size_t index = linearSearch(a, searchKey, SIZE);
    end = clock(); // Waktu akhir
    if(index != -1){
        printf("Angka ditemukan pada index : %ld\n",index);
    } else{ 
        printf("Angka tidak ditemukan ");
    }
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC; // Perhitungan waktu yang digunakan
    printf("Waktu yang diperlukan: %f detik\n", cpu_time_used);
}

size_t linearSearch(const int array[],int key, size_t size){
    for(size_t n=0; n < size;++n){
        if(array[n] == key){
            return n;
        }
    }
    return -1;
}