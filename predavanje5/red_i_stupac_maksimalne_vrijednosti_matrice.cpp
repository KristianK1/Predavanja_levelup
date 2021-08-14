//	Popuniti 10*20 matricu pseudoslucajnim realnim brojevima [-1,1].
// U row-u u kojoj se nalazi maksimalna vrijednost postaviti 
//sve vrijednosti na -2. 
//U stupcu u kojoj se nalazi maksimalna vrijednost postaviti
// sve vrijednosti na 2. Maksimalnu vrijednost ostaviti nepromjenjenu.
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#define gg 1
#define dg -1

int main(){
	float mat[10][20];
	srand((unsigned)time(NULL));
	for(int i=0;i<10;i++){
		for(int j=0;j<20;j++){
			mat[i][j]= dg + (float)rand()/RAND_MAX * (gg-dg);
		}
	}
	
	
	int iM=0, jM=0;
	float max=mat[0][0];
	
	for(int i=0;i<10;i++){
		for(int j=0;j<20;j++){
			if(mat[i][j]>max){
				max=mat[i][j];
				iM=i;
				jM=j;
			}
		}
	}
	
	for(int i=0;i<20;i++){
		if(i!=jM){
			mat[iM][i]=-2;
		}
	}
	
	for(int i=0;i<10;i++){
		if(i!=iM){
			mat[i][jM]=2;
		}
	}
	
	
	
		

for(int i=0;i<10;i++){
	for(int j=0;j<20;j++){
		printf("%.4f    ", mat[i][j]);
	}
	printf("\n");
}
	return 0;
}
