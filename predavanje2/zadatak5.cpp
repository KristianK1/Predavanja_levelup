#include<stdio.h>

int main(){
	int polje[5];
	
	for(int i=0;i<5;i++){
		scanf("%d", &polje[i]);
	}
	
	int zbroj=0;
	
	for(int i=0;i<5;i++){
		if(polje[i]>5){
			zbroj+=polje[i];
		}
	}
	
	printf("%d", zbroj);
	
	
	
	
	
	return 0;
}
