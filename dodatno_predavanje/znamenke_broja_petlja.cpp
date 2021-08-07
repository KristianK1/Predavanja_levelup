#include<stdio.h>
#include<stdlib.h>
int main(){
	int a;  //156165
	scanf("%d", &a);
	
	a=abs(a);
	
	int zbroj=0;
	int brojac=0;
	do{
		zbroj+=a%10;
		printf("%d " ,a%10);
		a/=10;
		brojac++;
		
	}while(a>0);
	
	printf("\n%.3f", (float)zbroj/brojac);
	
	
	return 0;	
}
