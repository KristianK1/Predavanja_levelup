#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void popunjavanje(int *p, int n, int dg, int gg){
	srand((unsigned)time(NULL));
	for(int i=0;i<n;i++){
		p[i]=rand()%(gg-dg+1)+dg;
	}
}

void ispis(int *p, int n){
	for(int i=0;i<n;i++){
		printf("%d  ", p[i]);
	}
}

int main(){
	
	int polje[20];
	
	popunjavanje(polje, 20, 3, 17);
	
	ispis(polje, 20);
	
	return 0;
}
