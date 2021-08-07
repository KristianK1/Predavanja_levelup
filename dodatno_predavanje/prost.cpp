#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	
	int prost=1;
	
	for(int i=2;i<a;i++){
		if(a%i==0){
			prost=0;
		}
	}
	if(prost==1) printf("prost");
	else printf("nije prost");
	
	return 0;
}
