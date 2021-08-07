#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	
	int dalijeprost=1;
	
	for(int i=2;i<a/2;i++){
		if(a%i==0){
			dalijeprost=0;
			
		}
	}
	if(dalijeprost==1){
		printf("prost");
	}
	if(dalijeprost==0){
		printf("nije prost");
	}
	
	
	
	
	return 0;
}
