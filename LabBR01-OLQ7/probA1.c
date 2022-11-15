#include <stdio.h>

int main(){
	int tc;
	int a[101][101];
	scanf("%d",&tc);getchar();
	for(int i=0;i<tc;i++){
		for(int j=0;j<tc;j++){
			scanf("%d",&a[i][j]);getchar();
		}
	}
	int count=0;
	if(tc==1){
	count=0;
	}else{
		count =0;
	for(int i=0;i<tc;i++){
		for(int j=0;j<tc;j++){
			for(int k=j-1;k>=0;k--){//check row ke atas
			if(a[i][j]==a[i][k]){
				count++;
			}
			}
			for(int l=j+1;l<=tc;l++){// check row ke bawah
				if(a[i][j]==a[i][l]){
				count++;
				}
			}
			for(int k=i-1;k>=0;k--){//check col ke kiri
			if(a[i][j]==a[k][j]){
				count++;
			}
		  }
		  for(int l=i+1;l<=tc;l++){// check col ke kanan
		  	if(a[i][j]==a[l][j]){
		  	count++;
			}
		  }
		}
	}
	}
	if(count!=0){
		printf("Nay\n");
	}else{
		printf("Yay\n");
	}
	return 0;
}