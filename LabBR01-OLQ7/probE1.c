#include <stdio.h>

int main(){
	
	int tamu;
	int jumlahKamar[5001];

	scanf("%d",&tamu);getchar();

	int count = tamu;
	for(int i = 0; i < tamu; i++){

		scanf("%d",&jumlahKamar[i]);
        getchar();
	}
	for (int i = 0;i < tamu; i++){

		for (int j = 0;j < i; j++){

			if (jumlahKamar[i] == jumlahKamar[j]){

				count--;
				break;
			}
		}
	}

	printf("%d\n",count);
	return 0;
}