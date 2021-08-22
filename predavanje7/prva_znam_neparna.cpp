#include<stdio.h>
#include<stdlib.h>
int fun(int broj){
	while(abs(broj)>9){
		broj/=10;
	}
	return broj%2;
}

int main(){
	int polje[12];
	int counter=0;
	for(int i=0;i<12;i++){
		scanf("%d", polje+i);
		if(fun(polje[i])==1) counter++;
		
		
	}
	printf("%d", counter);

	return 0;
}
