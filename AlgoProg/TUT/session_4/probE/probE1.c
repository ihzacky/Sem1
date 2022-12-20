#include <stdio.h>

int main (){
FILE *pf;
	pf = fopen("testdata.in", "r");
	int testCase;
	fscanf(pf, "%d", &testCase);
		for(int i = 0; i < testCase; i++){
		int N; 
		fscanf(pf, "%d", &N);
		int num[N], tot = 0; 
			for(int j = 0; j < N; j++){
			fscanf(pf, "%d", &num[j]);
			tot = tot + num[j];
		}
		printf("Case #%d: ", i + 1);
		
		int totP = 0;
		for(int k = 0; k < N; k++){
			for(int l = 0; l < num[k]; l++){
				if(k == 0 && l == 0){
					totP = totP + 8;
				}else if(k != 0  && l == 0){
					totP = totP + 6;
					totP = totP - 2;
				}else if(k == 0 && l != 0){
					totP = totP + 6;
					totP = totP - 2;
				}else if(k != 0 && l != 0 && (l > num[k - 1] - 1)){
					totP = totP - 2;
					totP = totP + 6;
				}else if(k != 0 && l != 0 && (l <= num[k - 1] - 1)){
				}
			}
		}
		printf("%d %d\n", totP, tot * 4);
	}
fclose(pf);
}