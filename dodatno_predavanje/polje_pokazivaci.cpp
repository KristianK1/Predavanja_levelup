#include<stdio.h>

void unesi(int *p, int n){
	for(int i=0;i<n;i++){
		scanf("%d", &p[i]);
	}
}

void ispisi(int *p, int n){
	for(int i=0;i<n;i++){
		printf("%d ", p[i]);
	}
}

int main(){
	int polje[10];
	
	unesi(polje, 10);
	ispisi(polje,10);
	
}
