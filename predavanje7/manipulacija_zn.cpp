#include<stdio.h>
#include<math.h>
#include<stdlib.h>
// 12345 -> 10005

int funkcija(int broj){
	
	if(abs(broj)<1000) return broj;
		
	int rezultat=broj%10;
	int potencija=0;
	
	while(abs(broj)>=10){
		broj/=10;
		potencija++;
		
	}
	rezultat+=broj*pow(10,potencija);
	
	return rezultat;		
}

int main(){
	printf("%d", funkcija(-23781));


	return 0;
}
