#include<stdio.h>
#include<stdlib.h>
int funkcija(char *polje){
	
	
	int counter;
	for(int i=0;polje[i]!='\0';i++){
		counter=0;
		for(int j=0;polje[j]!='\0';j++){
			if(polje[i]==polje[j]) counter++;
			
			
			
		}
		if(counter==1) return polje[i];
		
		
		
		
		
		
	}
	
	
	
	
}




int main(){
	char *p=(char*)calloc(30, sizeof(char));
	if(p==NULL) return 0;
	fgets(p,30,stdin);

	printf("%c\n", funkcija(p));
	
	printf("%c\n", funkcija("1313Abc1B"));
	
	free(p);
	
	return 0;
}
