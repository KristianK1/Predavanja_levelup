#include<stdio.h>
#define n 7
int main(){
	int mat[7][7]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49};
	//ispod glavne dijagonale
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	printf("\n\n\n");
	for(int i=0;i<n-1;i++){
		printf("%d\t", mat[i+1][i]);
	}	


	return 0;
}
