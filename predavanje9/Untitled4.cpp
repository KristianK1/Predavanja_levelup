#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define pi 3.14159654

double izracun(double *polje, int n){
	double sum=0;
	
	for(int i=0;i<n-1;i++){
		sum += ( sin(pi* pow(polje[i+1],2)  ) )/( fabs(polje[i]) + 0.01*(i+1));
	}
	
	sum/=n;
	
	return sum;
}


int main(){
	srand((unsigned)time(NULL));
	double *p=(double*)calloc(20, sizeof(double));
	if(p==NULL) return 1;
	
	for(int i=0;i<20;i++){
		p[i]=(double)rand()/RAND_MAX*(-5 -(-25)) + (-25);
	}
	
	double rez=izracun(p,20);
	
	printf("%f", rez);
	
	free(p);
	
	
	
	
	
}

