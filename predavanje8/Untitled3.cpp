//Omogu´citi korisniku unos dimenzija (mora biti parna vrijednost) kvadratne matrice
//(2-D polja) realnih brojeva n * n (10 <= n <= 20). Potom, omogu´citi korisniku popunjavanje
//matrice. Prona´ci i na ekran ispisati najmanju vrijednost ispod te najve´cu
//vrijednost iznad sporedne dijagonale.

#include<stdio.h>


int main(){
	int n;
	
	do{
		scanf("%d", &n);
	}while(n<10 || n>20 || n%2==1);
	
	float Mat[20][20];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%f", &Mat[i][j]);
			
	float minIznad=Mat[0][0], minIspod=Mat[n-1][n-1];		
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i+j<n-1){  //uvjet za iznad sporedne dijagonale
				if(minIznad>Mat[i][j]) minIznad=Mat[i][j];				
			}
			if(i+1>n-1)  //uvjet za ispod sporedne dijagonale
				if(minIspod>Mat[i][j]) minIspod= Mat[i][j];
		}
	}		
			
			
			
	return 0;	
}

