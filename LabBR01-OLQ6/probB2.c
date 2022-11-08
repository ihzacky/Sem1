#include <stdio.h>
#include <string.h>

int T;
int C[10001];
char B [10001];
char A [10001];

int main(){

	scanf("%d", &T);
	for (int i = 0;i < T;i++){

		scanf("%s", A);
		for (int j = 0;j < strlen(A);j++){
			if(A[j] >= 65 && A[j] <= 68){
				B[j] = 'A';
				C[j] = A[j] - B[j];
			}
			else if(A[j] >= 69 && A[j] <= 72){
				B[j] = 'E';
				C[j] = A[j] - B[j];
			}
			else if(A[j] >= 73 && A[j] <= 78){
				B[j] = 'I';
				C[j] = A[j] - B[j];
			}
			else if(A[j] >= 79 && A[j] <=84){
				B[j] = 'O';
				C[j] = A[j] - B[j];
			}
			else if(A[j] >= 85 && A[j] <= 90){
				B[j] = 'U';
				C[j] = A[j] - B[j];
			}
			else{
				B[j] = A[j];
				C[j] = 0;
			}
		}

		printf("Case #%d:\n", i+1);
		for (int j = 0;j < strlen(A);j++){

			printf("%c", B[j]);	
		}

		printf("\n");
		for (int j = 0;j < strlen(A);j++){

			printf("%d", C[j]);	
		}
		printf("\n");
	}
    return 0;
}