#include<stdio.h>
int main()
	//velicina matrice treba biti od 10*10 do 20*20
	int m[20][20];
	
	int n;  //[10,20]
	do{
		scanf("%d", &n);
	}while(!(n>=10 && n<=20));
	//}while(n < 10 || n > 20);

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &m[i][j]);
		}
	}
	//min na sporednoj
	int min=m[0][n-1];
	for(int i=0;i<n;i++){
		if(m[i][n-i]<min){
			min=m[i][n-i];
		}
	}
	

	return 0;
}
