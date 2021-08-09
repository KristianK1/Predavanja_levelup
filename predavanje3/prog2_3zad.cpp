#include<stdio.h>

void minmax(int **mat, int red, int stup, int *min, int *max){
	int max=mat[0][0];
	for(int i=0;i<red;i++){
		for(int j=0;ij<stup;j++){
			if(mat[i][j]>max){
				max=mat[i][j];
				max=&mat[i][j];
			}
		}
	}
}

int main(){
	int matrica[10][10];
	int *min, *max;
	
	
	
	minmax(matrica,10,10, min, max);

	printf("maks: %d", *max);


	return 0;
}
