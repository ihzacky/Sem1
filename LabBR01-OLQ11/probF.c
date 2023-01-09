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
    struct probF data[T];

    for (int i = 0; i < T; i++){
        
        scanf("%s", &data[i].name); getchar();        
        scanf("%s", &data[i].nim); getchar();        
        scanf("%s", &data[i].age); getchar();        
        scanf("%s", &data[i].postalcode); getchar();        
        scanf("%s", &data[i].placeofbirth); getchar();        
        scanf("%s", &data[i].dateofbirth); getchar();        
        scanf("%[^\n]", &data[i].highschool); getchar();        
        scanf("%s", &data[i].numberofsiblings); getchar();        
        scanf("%s", &data[i].height); getchar();        
        scanf("%s", &data[i].bankaccountnumber); getchar();        
    }
    
    for (int i = 0; i < T; i++){
        
        printf("Mahasiswa ke-%d:\n", i+1);
        printf("Nama: %s\n", data[i].name);
        printf("NIM: %s\n", data[i].nim);
        printf("Umur: %s\n", data[i].age);
        printf("Kode Pos: %s\n", data[i].postalcode);
        printf("Tempat Lahir: %s\n", data[i].placeofbirth);
        printf("Tanggal Lahir: %s\n", data[i].dateofbirth);
        printf("Almamater SMA: %s\n", data[i].highschool);
        printf("Jumlah Saudara Kandung: %s\n", data[i].numberofsiblings);
        printf("Tinggi Badan: %s\n", data[i].height);
        printf("NOMOR REKENING: %s\n", data[i].bankaccountnumber);
    }
    



    return 0;
}