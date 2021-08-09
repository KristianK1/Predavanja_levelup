#include<stdio.h>
int main(){
	int matrica[4][3];
	//unos matrice
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			scanf("%d", &matrica[i][j]);
		}
	}
	
	
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("%d\t", matrica[i][j]);		
		}
		printf("\n");
	}
	
	
	
	return 0;
}
