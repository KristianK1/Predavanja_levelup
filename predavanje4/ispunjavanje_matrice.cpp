//MATRICA 10*20
// [-5,6] € R

#include<stdio.h>

#include<stdlib.h> // rand(), srand()
#include<time.h> //time()

int main(){
	float m[10][20];
	
	for(int i=0;i<10;i++){
		for(int j=0;j<20;j++){
			m[i][j]=(float)rand()/RAND_MAX * 11 -5;
		}
	}
	
	
	
	return 0;
}
