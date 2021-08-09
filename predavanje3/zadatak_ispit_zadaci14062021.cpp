#include<stdio.h>
int main(){
	int m;
	float mat[30][30];
	do{
		scanf("%d", &m);
	}while(!(m>=12 && m<=30 && m%2==0));

	//isupnjavanje pseudo-sluèajnim vrijednostima, nemamo tu
	
	float min=mat[0][0];
	int index_i=0, index_j=0;
	
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			if(min>mat[i][j]){
				min=mat[i][j];
				index_i=i;
				index_j=j;
			}
		}
	}
	
	
	if(index_i-index_j==1){
		printf("broj se nalazi ispod glavne");
	}
	else if(index_i-index_j==-1){
		printf("broj se nalazi iznad glavne");	
	}
	else if(index_i+index_j==m){
		printf("broj se nalazi ispod sporedne");
	}
	else if(index_i+index_j==m-2){
		printf("broj se nalazi iznad sporedne");	
	}


	return 0;
}
