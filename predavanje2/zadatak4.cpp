#include<stdio.h>

int main(){
	int polje[10];
	
	for(int i=0;i<10;i++){
		scanf("%d", &polje[i]);
	}
	
	
	int max=polje[0];
	int max_i=0;
	
	for(int i=0;i<10;i++){
		if(polje[i]>max){
			max=polje[i];
			max_i=i;
		}	
	}
	printf("\n index: %d \n vrijednost: %d\n", max_i, max);
	
	return 0;
}
