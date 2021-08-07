#include<stdio.h>
#define n 30
//polje od 10 do 30 int-ova [10,30]
int main(){
	int polje[n];
	
	int broj;
	do{
		scanf("%d", &broj);
	}while(broj<10 || broj>30);
	printf("pocinje unos polja velicine: %d", broj);
	
	for(int i=0;i<broj;i++){
		scanf("%d", &polje[i]);
	}
	
	return 0;
}
