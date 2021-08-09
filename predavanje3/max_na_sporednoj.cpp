#include<stdio.h>

int main(){
	int matrica[5][5];

	int max=matrica[0][4];
	for(int i=0;i<5;i++){
		if(matrica[i][4-i]>max){
			max=matrica[i][4-i];
		}
	}
	
	
	//matrica[0][4]
	//matrica[1][3]
	//matrica[2][2]
	//matrica[3][1]
	//matrica[4][0]
	
	return 0;
}
