#include <stdio.h>
#include <string.h>

char string[100];   // declare array untuk menyimpan string
char output[100];   // declare array untuk menyimpan string
int length;         // declare integer untuk menyimpan panjang dari string

int main(){

    scanf("%s", string);    // input string

    length = strlen(string);    // mencari berapa panjang dari string dan disimpan pada int length

    for (int i = 0; i < length; i++){   // loop untuk membalikkan sebuah string
        
        /*  memasukkan huruf pada array string menuju array output dengan
            cara menaruh huruf pada array paling depan pada array 
            string ke array paling belakang stringn output dan seterusnya */
        output[(length-1)-i] = string[i];
        
    }
    
    printf("%s\n", output); // print string yang sudah dibalik

    return 0;
}