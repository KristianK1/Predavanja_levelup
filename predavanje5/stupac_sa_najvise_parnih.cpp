//Omogu�iti korisniku unos matrice m*n (12<=m<=30, 9<n<21).
//pseudo slu�ajni [-m, n] � Z. Odrediti i ispisati na ekran stupac koji
//sadr�i najvi�e parnih brojeva.
//Ukoliko ima vi�e takvih stupaca, ispisati ZADNJI po redu.
#include<stdlib.h>
#include<time.h>
#include<stdio.h>



int main(){


	int m,n;
	do{
		scanf("%d", &m);
		scanf("%d", &n);
	}while((m<12 || m>30)  ||  (n<=9 || n>=21));
	
	int mat[30][20];
	
	
	srand((unsigned)time(NULL));
	
	
	for(int i=0;i<m;i++){
		
		for(int j=0;j<n;j++){
			
			mat[i][j]= rand()%(n- (-m)+1) + (-m);
			
		}
		
	}
	
	
	int Stupac_u_pitanju=0;
	int maxParni=0; //sadr�i maks broj parnih
	int brojac;
	for(int j=0;j<n;j++){
		
		
		brojac=0;
		
		for(int i=0;i<m;i++){
			
			
			if(mat[i][j]%2==0){
				brojac++;
				
				
			}
			
			
		}
		if(brojac>=maxParni){  //>= zbog zadnjeg takvog stupca
			maxParni=brojac;
			Stupac_u_pitanju=j;
			
			
			
		}
				
	}
	
	
	for(int i=0;i<m;i++){
		printf("%d\n", m[i][Stupac_u_pitanju]);
	}
	



	return 0;
}
