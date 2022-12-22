#include <stdio.h>

// declare function 
void swap(int *x, int *y);
void bubblesort(int arr[], int n);
void printarr(int arr[], int n);

int main(){

    // declare array
    int arr[] = {14, 6, 23, 18, 7, 47, 2, 83, 16, 38};

    // mencari panjang dari string
    int n = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, n);
    printarr(arr, n);

    return 0;
}

// funciton untuk melakukan bubble sort
void bubblesort(int arr[], int n){

    // 
    for (int i = 0; i < n-1; i++){

        // 
        for (int j = 0; j < n-i - 1; j++){
            
            // jika array saat ini lebih besar dari array selanjutnya, masuk if
            if (arr[j] > arr[j+1]){

                // swap angka pada aray saat ini ke array berikutnya
                swap(&arr[j], &arr[j+1]);
            }
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