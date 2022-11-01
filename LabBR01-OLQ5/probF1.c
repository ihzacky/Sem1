#include<stdio.h>

int findmax(int A[], int n){
	int max = 0;
	for (int j =1;j < n;j++){
		if(max < A[j]){
			max = A[j];
		}
	}
	return max;
}

int bibi, dragon;
int B[100001], D[100001];

int main (){

	scanf("%d %d", &bibi, &dragon);
	for(int j = 1;j <= bibi;j++){
		scanf("%d", &B[j]);
	}

	for(int j = 1;j <= dragon;j++){
		scanf("%d", &D[j]);
	}
    
	if(findmax(B, bibi) > findmax(D, dragon)){
		printf("The dark secret was true\n");
	}
	else{
		printf("Secret debunked\n");
	}
}