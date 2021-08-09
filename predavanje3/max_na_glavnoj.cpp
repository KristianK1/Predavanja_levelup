#include<stdio.h>

int main(){
	int matrica[5][5];
	
	int max=matrica[0][0];
	for(int i=0;i<5;i++){
		if(matrica[i][i] > max){
			max=matrica[i][i];
		}
	}
	
	return 0;
}
