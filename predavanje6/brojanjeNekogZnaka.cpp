#include<stdio.h>

int brojanje(char *rec, char znak){
	int freq=0;
	for(int i=0;rec[i]!='\0';i++){
		if(rec[i]==znak) freq++;
	}
	
	return freq;
}

int main(){
	char recenica[100], znak;
	fgets(recenica, 100, stdin);
	scanf("%c", &znak);
	printf("%d", brojanje(recenica, znak));
	
	
	return  0;
}
