#include<stdio.h>
#include<stdlib.h>

//funkcija prima ADRESU ovog string, sto znaci da sto god radimo u funkciji sa tim stringom,
//glavni program preko adrese "vidi" promjene, 
//stoga funkcija ne treba nista vracati.

void funkcija(char *str){
	//A -> B, B -> C ...... Y->Z, Z->A, a -> b, b -> c .... y -> z, z -> a
	//sva slova od 'A' do 'Y' cemo samo inkrementirati, a ako je 'Z' u pit-
	//tanju njega cemo postaviti na 'A', isto i za mala slova
	
	int i;
	for(i=0;str[i]!='\0';i++){ //prolazimo kroz cijeli string
		
		if(str[i]>='A' && str[i]<='Y') str[i]++;
		else if(str[i]=='Z') str[i]='A'; //mora ici else if,a ne else jer mi inace 'X' prvo presao inkrementiranjem u 'Z', a onda otisao u 'A'
		
		if(str[i]>='a' && str[i]<='y') str[i]++;
		else if(str[i]=='z') str[i]='a';
	}
}










int main(){
	char *p=(char*)calloc(20, sizeof(char));
	if(p==NULL) return 0;
	
	fgets(p,20, stdin);
	funkcija(p);
	
	fputs(p, stdout);
	
	
	char p1[]="Zzz9mnmy";
	funkcija(p1);
	fputs(p1, stdout);
	
	
	free(p);
	return 0;
}
