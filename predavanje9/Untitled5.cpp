#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<math.h>



float izracun(float *polje, int n){
	float zbroj=0;
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			zbroj+=pow( polje[i] - polje[j] ,2);
		}
	}
	return zbroj;
}



int main(){
	srand((unsigned)time(NULL));
	float polje[20];
	for(int i=0;i<20;i++) polje[i]=(float)rand()/RAND_MAX *2-1;
	
	printf("%f", izracun(polje,20));
	
	return 0;
	
	
	
}
