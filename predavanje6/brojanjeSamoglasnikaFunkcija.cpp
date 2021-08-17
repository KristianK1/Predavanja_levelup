#include<stdio.h>

int brojanjeSG(char *rec){
	char samoG[]={'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
	int brojac=0;
	
	for(int i=0;rec[i]!='\0';i++){
		for(int j=0;j<10;j++){
			if(rec[i]==samoG[j]) brojac++;
		}
	}
	return brojac;
}

int main(){
	char test[100];
	fgets(test,100, stdin);
	int broj=brojanjeSG(test);
	printf("%d", broj);
	return 0;
}
