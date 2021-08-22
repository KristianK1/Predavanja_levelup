#include<stdio.h>
#include<stdlib.h>
int funkcija(int broj){
	broj=abs(broj); //da ne mislim jel negativan ili pozitivan
	
	if(broj<10) return 0; //ako je broj jednoznamenkast razlika je nula
	
	int zadnja=broj%10;  //zadnja znamenka
	
	while(broj>=10){
		broj/=10; //dijeli s 10 sve dok ne ostane jedna znamenka
	}
	//u ovoj liniji u "broj"-u je ostala samo jedna znamenka
	
	return broj-zadnja;  //prva - zadnja
}

int main(){
	int ulaz;
	
	do{
		scanf("%d", &ulaz);
		printf("Rezultat funkcije je: %d\n", funkcija(ulaz));
	}while(ulaz<=0 || funkcija(ulaz)>=0);
	
	return 0;
	
}
