#include <stdio.h>

// declare variable
int T;
int N;

int area;

int perimeterT = 0;
int areaT = 0;

int main(){
    // open file
    FILE *fp = fopen("testdata.in", "r");

    // read testcase
    fscanf(fp, "%d\n", &T);

    // loop testcasee
    for (int i = 0; i < T; i++){

        // read the number of stacks
        fscanf(fp, "%d\n", &N);
        
        // declare variable to store number of stacks and temporary result
        int X[N+1];
        int subResult[N+1];

        // loop number of stacks
        for (int j = 0; j < N; j++){

            // read height of stacks
            fscanf(fp, "%d", &X[j]);
            
            // calculate area
            area = X[j] * 4;
            areaT += area;

            // add value to each array
            subResult[j] = 0;
        }

        // loop testcase for finding perimeter
        for (int k = 0; k < N; k++){

            // jika k == 0, masuk if
            if (k == 0){

                // jika array saat ini lebih besar dari array selanjutnya, masuk if
                if (X[k] > X[k+1]){
                    
                    // keliling bangun - tinggi dari stack selanjutnya
                    subResult[k] = (2 * ((X[k] * 2) + 2)) - (X[k+1] * 2);
                } else if (X[k] < X[k+1]){
                    
                    // keliling bangun - tinggi dari stack saat ini
                    subResult[k] = (2 * ((X[k] * 2) + 2)) - (X[k] * 2);
                }
            }
            
            // jika k == N-1 / array terakhir, masuk if
            if (k == N-1){

                // jika array saat ini lebih besar dari array sebelumnya, masuk if
                if (X[k] > X[k-1]){

                    // keliling bangun - tinggi dari stack sebelumnya
                    subResult[k] = (2 * ((X[k] * 2) + 2)) - (X[k-1] * 2);
                } else if (X[k] < X[k-1]){

                    // keliling bangun - tinggi dari stack saat ini
                    subResult[k] = (2 * ((X[k] * 2) + 2)) - (X[k] * 2);
                }
            }
            
            // jika k ada berada di tengah / bukan di awal maupun akhir, masuk if
            if (k != 0 && k != N-1){

                // hitung sisi kanan saja
                if (X[k] > X[k+1]){

                    // tinggi bangun - tinggi bangun selanjutnya 
                    subResult[k] += (X[k] * 2) - (X[k+1] * 2);
                } else if (X[k] < X[k+1]){
                
                    subResult[k] += (X[k] * 2) - (X[k] * 2);
                }

                // hitung sisi kiri saja
                if (X[k] > X[k-1]){

                    // tinggi bangun - tinggi bangun sebelumnya
                    subResult[k] += (X[k] * 2) - (X[k-1] * 2);
                
                } else if (X[k] < X[k-1]){

                    subResult[k] += (X[k] * 2) - (X[k] * 2);
                }
                
                subResult[k] += 4;// tambah atas bawah
                
            }

            perimeterT += subResult[k];
        }

        printf("Case #%d : %d %d\n", i+1, perimeterT, areaT);
    }
    
    // close file
    fclose(fp);
    
    return 0;
}