#include<stdio.h>

int main(){
	unsigned int a=100000;
	scanf("%u", &a);  //4294967301
	
	printf("%u", a);
	
	
	while(1){
		printf("%u\n", a);
		a--;
	}
	return 0;
}
