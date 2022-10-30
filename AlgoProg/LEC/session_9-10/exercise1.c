#include <stdio.h>

int x[10]; // deklarasi array untuk meyimpan angka-angka

int main(){

    for (int i = 0; i < 10; i++){   // loop untuk menerima input angka-angka
        
        scanf("%d", &x[i]); // input angka-angka

    }
    
    int min = x[0]; // deklarasi untuk menyimpan angka terkecil
    int max = x[0]; // deklarasi untuk menyimpan angka terbesar
    for (int i = 0; i < 10; i++){ 
        
        if(x[i] > max){ // mencari angka maksimal, jika ditemukan akan dimasukkan ke int max
            max = x[i];
        }

        if(x[i] < min){ // mencari angka minimum, jika ditemukan akan dimasukkan ke int min
            min = x[i];
        }
    }
    
    int sum = 0;    // deklarasi int sum yang akan menyimpan angka dari penjumlahan
    double avg;     // deklarasi double avg yang akan menyimpan angka dari rata-rata, menggunakan double karena rata-rata dapat berupa ankga desimal
    for (int i = 0; i < 10; i++){
        
        sum += x[i];    // menambahkan setiap angka pada array

    }
    
    avg = sum / 10;     // membagi hasil penjumlahan angka dengan angka 10 yaitu jumlah seluruh kolom array

    printf("Max value inside the array: %d\n", max);      // print angka maksimum pada array
    printf("Min value inside the array: %d\n", min);      // print angka minimum pada array
    printf("Average value of the array: %.2lf\n", avg);   // print rata rata-rata, menggunakan %.2lf agar hanya 2 angka dibelakang nol

    return 0;
}