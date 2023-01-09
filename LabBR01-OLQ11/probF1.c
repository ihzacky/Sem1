#include <stdio.h>

int T;
struct probF
{
    char name[101];
    char nim[10];
    char age[101];
    char postalcode[7];
    char placeofbirth[101];
    char dateofbirth[101];
    char highschool[101];
    char numberofsiblings[101];
    char height[1001];
    char bankaccountnumber[10];
};


int main(){

    scanf("%d", &T); getchar();
    struct probF data;

    for (int i = 0; i < T; i++){
        
        scanf("%s", &data.name); getchar();        
        scanf("%s", &data.nim); getchar();        
        scanf("%s", &data.age); getchar();        
        scanf("%s", &data.postalcode); getchar();        
        scanf("%s", &data.placeofbirth); getchar();        
        scanf("%s", &data.dateofbirth); getchar();        
        scanf("%[^\n]", &data.highschool); getchar();        
        scanf("%s", &data.numberofsiblings); getchar();        
        scanf("%s", &data.height); getchar();        
        scanf("%s", &data.bankaccountnumber); getchar();   

        printf("Mahasiswa ke-%d:\n", i+1);
        printf("Nama: %s\n", data.name);
        printf("NIM: %s\n", data.nim);
        printf("Umur: %s\n", data.age);
        printf("Kode Pos: %s\n", data.postalcode);
        printf("Tempat Lahir: %s\n", data.placeofbirth);
        printf("Tanggal Lahir: %s\n", data.dateofbirth);
        printf("Almamater SMA: %s\n", data.highschool);
        printf("Jumlah Saudara Kandung: %s\n", data.numberofsiblings);
        printf("Tinggi Badan: %s\n", data.height);
        printf("NOMOR REKENING: %s\n", data.bankaccountnumber);
    }

    return 0;
}