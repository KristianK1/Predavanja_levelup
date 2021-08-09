#include<stdio.h>
int main(){
	int matrica[4][3];
	//izracunati maksimalnu vrijednost cijele matrice
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			scanf("%d", &matrica[i][j]);
		}
	}
	
	int max=matrica[0][0];
	for(int i=0;i<4;i++){
		for(int j=0; j<3;j++){
			if(matrica[i][j]>max){
				max=matrica[i][j];
			}
		}
	}
	printf("maksimalni element: %d", max);

	return 0;
}
