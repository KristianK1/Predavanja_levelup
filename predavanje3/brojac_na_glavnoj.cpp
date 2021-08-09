//kvadratna matrica 10*10, unijeti matricu i jedan broj x i ispisati
//koliko se puta boj x pojavljuje na glavnoj dijagonali
#include<stdio.h>
int main(){
	int m[10][10];
	for(int i=0;i<10;i++)
		for(int j=0;j<10;j++)
			scanf("%d", &m[i][j]);
			
	printf("unesite broj");
	int x;
	scanf("%d", &x);
	
	int brojac=0;
	for(int i=0;i<10;i++)
		if(x==m[i][i])
			brojac++;
			
	printf("brojac: %d", brojac);
	return 0;
}
