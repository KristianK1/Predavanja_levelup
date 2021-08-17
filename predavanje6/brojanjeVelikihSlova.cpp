#include<stdio.h>
int main(){
	char q[50];
	fgets(q,50,stdin);s
	
	
	int brojac=0;
	for(int i=0;q[i]!='\0';i++){
		if(q[i]>='A' && q[i]<='Z') brojac++;
	}
	
	printf("%d", brojac);


	return 0;
}
