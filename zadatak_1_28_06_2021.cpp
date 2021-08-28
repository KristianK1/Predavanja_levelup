#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand((unsigned)time(NULL));
	int m,n;
	
	do{
		scanf("%d", &m);
	}while(!(12<=m && m<=30));
	
	do{
		scanf("%d", &n);
	}while(!(9<n && n<21));
	
	
	int M[30][20];
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			M[i][j]=rand()%(m+n+1)+m;
		}
	}
	
	int maxParnih=0;
	int stupac_sa_najvise_parnih=0; //index
	
	int brojac;
	for(int j=0;j<n;j++){
		brojac=0;
		for(int i=0;i<m;i++){
			if(M[i][j]%2==0) brojac++;
		}
		
		if(brojac>maxParnih){
			maxParnih=brojac;
			stupac_sa_najvise_parnih=j;
		}
	}
	
	for(int i=0;i<m;i++){
		printf("%d\n", M[i][stupac_sa_najvise_parnih]);
	}
	
	
	
	
	
	
}
