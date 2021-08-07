#include<stdio.h>

int main(){
	int polje[10];
	
	int min=polje[0];
	
	for(int i=0;i<10;i++){
		if(polje[i]<min){
			min=polje[i];
		}
	}
	printf("%d", min);
	return 0;
}
