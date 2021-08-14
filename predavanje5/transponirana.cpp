//	Unijeti matricu dimenzija n*m (5<n<10, 5<m<15)
//Pohraniti i ispisati transponiranu joj matricu.

#include<stdio.h>
int main(){
	int n,m;
	do{
		scanf("%d", &n);
		scanf("%d", &m);
	}while((5>=n || n>=10) || (m<=5 || m>=15));
	int mat[9][14];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf("%d", &mat[i][j]);
			
	int tr[14][9];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			tr[i][j]=mat[j][i];
		}
	}
	


	return 0;
}
