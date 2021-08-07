#include<math.h>
#include<stdio.h>
#define pi 3.1415926538979323846
int main(){
	float x[10];
	
	float rezultat;
	
	rezultat=10*pow(x[9],-3);
	
	float sumacija=0;
	for(int i=0;i<10-1;i++){
		sumacija+=i*pow(x[i], -2)+cos(pi/(x[i]+1));
	}
	rezultat+=sumacija;
	printf("%.3f", rezultat);
	return 0;
}
