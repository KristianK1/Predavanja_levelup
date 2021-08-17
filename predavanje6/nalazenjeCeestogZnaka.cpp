#include<stdio.h>

//"dheofjgjndllsdzr"

char funkcija(char *rec){
	int maxBroj=0; //maksimalni broj ponavljanja
	char maxZnak=rec[0];
	
	for(int i=0; rec[i]!='\0';i++){
		int brojac=0;
		for(int j=0; rec[j]!='\0';j++){
			if(rec[i]==rec[j]) brojac++;
		}
		if(brojac>=maxBroj){
			maxBroj=brojac;
			maxZnak=rec[i];
		}
	}
	return maxZnak;
}

int main(){
	printf("%c", funkcija("wertzuiojhhhhhhgdrr000tt"));
	return 0;
}
