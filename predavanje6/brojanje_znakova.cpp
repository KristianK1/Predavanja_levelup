#include<stdio.h>
int main(){
	char q[100];
	fgets(q,100,stdin);
	
	int brojac=0;
	
	for(int i=0;q[i]!='\0';i++){
		brojac++;
		printf("%d\n", q[i]);
	}
	
	brojac--;
	
	printf("%d", brojac);



	return 0;
}
