#include <stdio.h>
#include <time.h>
#define SIZE 100000

size_t linearSearch(const int b[],int searchKey,size_t low,size_t high);

int main(){
    int b[SIZE];
    int  low = 0;
    int  high = SIZE;
    clock_t start, end;
    double cpu_time_used;

    for(size_t x= 0; x<SIZE;++x){
        b[x] = 2*x+1;
    }
    printf("Masukan angka integer :");
    int searchKey;
    scanf("%d", &searchKey);
    start = clock();
    size_t index = linearSearch(b, searchKey, low,high);
    end = clock(); // Waktu akhir
    if(index != -1){
        printf("Angka ditemukan pada index : %ld\n",index);
    } else{ 
        printf("Angka tidak ditemukan ");
    }
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC; // Perhitungan waktu yang digunakan
    printf("Waktu yang diperlukan: %f detik\n", cpu_time_used);
}

size_t linearSearch(const int b[],int searchKey,size_t low,size_t high){
    while (low <= high) {
        size_t middle = (low + high) / 2;
        // printRow(b, low, middle, high);
        if (searchKey == b [middle]) { return middle;
        }
        else if (searchKey < b[middle]) {
            high = middle;
        } 
        else { 
            low = middle + 1; // search high end of array
        }
    } // end while
    return -1;
}