#include<stdlib.h>
#include<stdio.h>

int ZbPozDj(short int broj){
	broj=abs(broj);
	int zbroj=0;
	
	for(int i=1;i<=broj;i++){
		if(broj%i==0){
			zbroj+=i;
		}
	}
	return zbroj;
}



int funkcija(short int *polje, int n, int p){
	int koliko=0;
	for(int i=0;i<n;i++){
		if(ZbPozDj(polje[i])>=p) koliko++;
	}
	return koliko;
}

int main(){
	short int *p=(short int *) calloc(5, sizeof(short int));
	if(p==NULL) return 1;
	
	for(int i=0;i<5;i++) scanf("%d", &p[i]);
	
	int rez = funkcija(p, 5, 4);
	
	printf("%d", rez);
	
	free(p);
	
	return 0;
}
