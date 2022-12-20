#include <stdio.h>
#include <string.h>

int N;  // declare integer untuk menampung angka jumlah records
int T;  // declare integer untuk menampung angka jumlah testcase

struct read_record{ // menggunakan struct untuk menyimpan string dari records

    char M[41];
    char P[41];
} read[100];

char input[41]; //input testcase

int main(){

    FILE *fp = fopen("testdata.in", "r");   // open file dengan mode read

    fscanf(fp, "%d\n", &N); // read angka jumlah record dan simpan di variable N
    for (int i = 0; i < N; i++){    // loop untuk membaca records dalam file

        fscanf(fp, "%[^#]#%[^\n]\n", &read[i].M, &read[i].P);   // read nama-nama pada records
    }

    fscanf(fp,"%d\n", &T);  // read angka testcase dan simpnn di variable T
    for (int i = 0; i < T; i++){    // loop testcase
       
       fscanf(fp, "%s", &input);   // read name of friend dari file
        printf("Case #%d: ", i+1); 

        int found = 0;  // declare variableddd found menjadi 0
        for (int j = 0; j < N; j++){    // loop untuk compare string

            if (strcmp(input, read[j].M) == 0){    // icompare nput_testcase sama dengan name of friend

                printf("%s\n", read[j].P);  // print name tree yang telah tersimpan di struct
                found = 1;  // set variable found menjadi angka 1
                break;  // break keluar loop
            }
        }

        if (found == 0){    // cek apakah found masih berangka 0
            
            printf("N/A\n");    // print N/A jika found == 0
        }
    }
    
    fclose(fp); // close file

    return 0;
}