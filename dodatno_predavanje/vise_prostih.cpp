#include<stdio.h>

int main(){
	int prost;
	for(int broj=2; broj<300;broj++){
		prost=1;
		for(int i=2;i<broj;i++){
			if(broj%i==0){
				prost=0;
			}
		}
		
		if(prost==1) printf("broj %d je prost\n", broj);
		else printf("broj %d nije prost\n", broj);
	}
	
	return 0;
}
