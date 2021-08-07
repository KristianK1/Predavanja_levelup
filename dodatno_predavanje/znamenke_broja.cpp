#include<stdio.h>

int main(){
	int a=27;
	
	int zJ=a%10;
	int zD=a/10%10;
	int zS=a/10/10%10;
	
	printf("%d %d %d", zJ, zD, zS);
	
	
	return 0;	
}
