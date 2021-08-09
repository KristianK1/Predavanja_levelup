#include<stdio.h>
#include<stdlib.h>

int** f(int **m, int red, int stup){
	int min=m[0][0], max=m[0][0];
	for(int i=0;i<red;i++){
		for(int j=0;j<stup;j++){
			if(m[i][j]<min){
				min=m[i][j];
			}
			if(max>m[i][j]){
				max=m[i][j];
			}
		}
	}
	printf("%d %d\n\n", min, max);
	int **p=(int**)malloc(red*sizeof(int*));
	if(p==NULL) return NULL; //ili exit?
	for(int i=0;i<red;i++){
		p[i]=(int*)malloc(stup*sizeof(int));
		if(p[i]==NULL) return NULL;
	}
	
	for(int i=0;i<red;i++)
		for(int j=0;j<stup;j++)
			p[i][j]=m[i][j]+max-min;
	
	
	return p;
}


int main(){
	int n,m;
	
	//unosenje dimenzija
	do{
		scanf("%d", &n);
	}while(!(n>=4 && n<=20));
	
	do{
		scanf("%d", &m);
	}while(!(m>=5 && m<=15));
	//kraj unosenja dimenzija
	
	//alokacija
	int **mat=(int**)malloc(n*sizeof(int*));
	if(mat==NULL) return 0;
	
	for(int i=0;i<n;i++){
		mat[i]=(int*)malloc(m*sizeof(int));
		if(mat[i]==NULL) return 0;
	}
	//kraj alokacije (prve)
	
	
	//u ovom dijelu treba ispunit matricu
	
	int **mat2=f(mat, n,m);
	if(mat2==NULL) return 0;
	
	
	
	
	
	//pocetak oslobadanja
	for(int i=0;i<n;i++){
		free(mat[i]);
		mat[i]=NULL;
	}
	
	free(mat);
	mat=NULL;
	
	for(int i=0;i<n;i++){
		free(mat2[i]);
		mat[i]=NULL;
	}
	
	free(mat2);
	mat2=NULL;
	//kraj oslobadanja



	return 0;
}
