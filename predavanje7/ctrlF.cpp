#include<stdio.h>
int funkcija(char *veliki, char *mali){
	// TZUILNFSADhkjfkgjjfsfbvfd
	// TZUIg
	for(int i=0;veliki[i]!='\0';i++){
		
		int counter; //moze biti izvan for petlje
		for(counter=0;mali[counter]!='\0';counter++){ } //moze biti izvan for petlje
		
		int j;
		for(j=0; mali[j]!='\0';j++){
			if(mali[j]!=veliki[i+j]) break;
		}
		
		if(j==counter){
			return 1;
		}
	}
	return 0;
}


int main(){
	printf("%d", funkcija("TZUILNFSADhkjfkgjjfsfbvfd","TZUIg"));
}
