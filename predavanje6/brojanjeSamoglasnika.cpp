#include<stdio.h>
int main(){
	char q[50];
	fgets(q,50,stdin);
	int brojac=0;
	char samoG[]={'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
	
	for(int i=0;q[i]!='\0';i++){
		for(int j=0;j<10;j++){ //jer ima 10 vrijednosti koje moramo provjerit
			if(q[i]==samoG[j]){
				brojac++;
			}
		}
		
	}	
	printf("%d", brojac);
	
	
	
	
	
	
	
	return 0;
}
