#include<stdio.h>
#include<stdlib.h>
int medRaz(char *str){
	// "ertzuitkjbv"
	int brojac=0;
	for(int i=0;str[i]!='\0';i++){
		int imaPrije=0;
		for(int j=0;j<i;j++){
			if(str[i]==str[j]) imaPrije=1;
		}
		if(imaPrije==0) brojac++;
	}
	return brojac;
}


int main(){
	char *p=(char*)calloc(30, sizeof(char));
	fgets(p,30,stdin);
	
	printf("%d\n", medRaz(p));
	
	printf("%d\n", medRaz("Ovo je funkcija za string"));

	free(p);
	return 0;
}







