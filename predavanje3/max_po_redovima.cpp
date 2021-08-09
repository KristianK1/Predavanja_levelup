#include<stdio.h>
int main(){
	int matrica[3][5];
	//izracunati maksimalnu vrijednost svakog reda
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			scanf("%d", &matrica[i][j]);
		}
	}
	
	for(int i=0;i<3;i++){
		int max=matrica[i][0];
		
		for(int j=0;j<5;j++){
			if(matrica[i][j]>max){
				max=matrica[i][j];
			}	
		}
		printf("%d\n", max);
	}
	
	
	return 0;
}
