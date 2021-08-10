#include<stdio.h>

int main(){
	int polje[10];
	for(int i=0;i<10;i++){
		//polje[i]=i;
		*(polje+i) = i;
	}
	
	for(int i=0;i<10;i++){
		printf("%d ", *(polje+i));
	}
	
	
	
	
	return 0;
}
