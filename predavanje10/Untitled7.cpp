//Napisati funkciju koja u predanom joj stringu zamjenjuje samoglsnike znakom znamenke
//koja odgovara ostatku pri cjelobrojnom dijeljenju indeksa s dva (indeks samoglasnika
//u polju modulo 2). Primjerice, funkcija treba string AhigeU promijeniti
//u 0h0g01. U svrhu testiranja u funkciji main() omogu´citi korisniku unos stringa
//od maksimalno 125 znakova. Pozvati funkciju i potom na ekran ispisati izmijenjeni
//string.

#include<stdio.h>
void fun(char *str){
	char samoG[]={'A','E','I','O','U','a','e','i','o','u'};
	
	for(int i=0;str[i]!='\0';i++){
		
		int temp=0;
		for(int q=0;q<10;q++){
			if(str[i]==samoG[q]) temp=1;
		}
		
		if(temp==1){
			//if(i%2==0) str[i]='0';
			//if(i%2==1) str[i]='1';
			str[i]='0'+ i%2;
		}
	}
}

int main(){
	char rec[126];
	fgets(rec,126, stdin);
	fun(rec);
	fputs(rec, stdout);
	return 0;
}
