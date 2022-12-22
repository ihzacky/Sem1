#include <stdio.h>

// declare function
void selectionsort(int arr[], int n);
void swap(int *x, int *y);
void printarr(int arr[], int n);

int main(){

    // declare array angka
    int arr[] = {14, 6, 23, 18, 7, 47, 2, 83, 16, 38};

    // mencari panjang array
    int n = sizeof(arr) / sizeof(arr[0]);

    // memanggil function soring
    selectionsort(arr, n);
    printarr(arr, n);

    return 0;
}

void selectionsort(int arr[], int n){
    
    // 
    for (int i = 0; i < n-1; i++){
        
        // simpan index dengan 'i'
        int index_low = i;
        for (int j = i+1 ; j < n; j++){
        
            // jika value array saat ini lebih kecil dari value array yang indexnya telah disimipan tadi,
            // maka simpan angka index saat ini
            if (arr[j] < arr[index_low]){
                
                index_low = j;                
            } 
        }
        
        // jika index_low lebih besar dari iteriasi loop panjang array
        // maka swap angka pada array
        if (index_low > i){

            swap(&arr[i], &arr[index_low]);
        }
    }
}

// function untuk swap angka pada array
void swap(int *x, int *y){

    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

// function untuk print array
void printarr(int arr[], int n){

    for (int i = 0; i < n; i++){
        
        printf("%d ", arr[i]);        
    }
    printf("\n");
}
