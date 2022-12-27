#include <stdio.h>

void insertionsort(int arr[], int n);
void printarr(int arr[], int n);

int main(){

    int arr[] = {14, 6, 23, 18, 7, 47, 2, 83, 16, 38};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionsort(arr, n);
    printarr(arr, n);

    return 0;
}

void insertionsort(int arr[], int n){
    
    // declare integer j dan temp = 0
    int j, temp = 0;

    for (int i = 1; i < n; i++){
        
        temp = arr[i];
    
        // loop mengcompare value dari setiap elemen array dengan value dari temp
        // jika value dari elemen array lebih besar dari temp, 
        //maka value pada array tersebut dipindahkan ke index sebelah kanannya
        for (j = i-1; j >= 0 && arr[j] > temp; j--){
            
            // array dari 
            arr[j+1] = arr[j];
        }
        
        arr[j+1] = temp;
    }
    
}

// function untuk print array
void printarr(int arr[], int n){

    for (int i = 0; i < n; i++){
        
        printf("%d ", arr[i]);        
    }
    printf("\n");
}