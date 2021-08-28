#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define dg -9
#define gg 9


int main(){
	srand((unsigned)time(NULL));
	int m;
	do{
		scanf("%d", &m);
	}while(!(15<m && m<=32));

	int M[32][32];
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			M[i][j]=rand()%(gg-dg+1)+dg;
		}
	}
	
	int x;
	do{
		scanf("%d",&x);
	}while(!(-9<=x && x<=9)); //[-9,9]
	
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			printf("%d\t", M[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0;i<m;i++){
		//x=8           j
		// {0, 5, 6, 7, 8, 9, 2, 1, 0, 3, 0}
		
		for(int j=0;j<m;j++){
			if(M[i][j]==x){
				for(int k=j;k<m-1;k++){
					M[i][k]=M[i][k+1];
				}
				M[i][m-1]=0;
			}
		}
	}
	
	printf("\n\n\n");
	for(int i=0;i<m;i++){
		
		for(int j=0;j<m;j++){
			printf("%d\t", M[i][j]);
		}
		printf("\n");
	}


	return 2;
}
