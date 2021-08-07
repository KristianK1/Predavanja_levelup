#include<stdio.h>

int main(){
	int polje[10];
	
	int zbroj=0;
	for(int i=0;i<10;i++){
		scanf("%d", &polje[i]);
		
		if(polje[i]>0) zbroj+=polje[i];
	}
	
	printf("%d", zbroj);
	
	return 0;
}
