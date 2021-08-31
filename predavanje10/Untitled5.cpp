//fun koja racuna i vraca ait. sredinu znamenki cj. broja.
//korisnik unese cijeli broj, neg i sredina>7
#include<stdio.h>
#include<stdlib.h>
float fun(int broj){
	float sredina=0;
	int n=0;
	broj=abs(broj);
	do{
		sredina+=broj%10;
		n++;
		broj/=10;	
	}while(broj!=0);
	
	return sredina/n;
}


int main(){
	int br;
	do{
		scanf("%d", &br);
		printf("%.2f\n", fun(br));
	}while(br>=0 || fun(br)<=7);
}
