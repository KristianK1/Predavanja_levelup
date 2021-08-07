#include<stdio.h>
int main(){
	int a;
	
	for(int i=0;i<50;i++){
		printf("%d: ", i);
		if(i%2==0){
			printf("paran\n");
		}
		else{
			printf("neparan\n");
		}
	}
	
	return 0;
}


