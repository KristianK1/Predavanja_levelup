#include<stdio.h>
#include<math.h>
int main(){
	
	float x[10];
	
	float suma=0;
	for(int i=1;i<10-1;i++){
		suma+=(x[i-1] + pow(x[i],2) - pow(x[i+1], 3)) / (i-1);
	}
	
	
	return 0;
}
