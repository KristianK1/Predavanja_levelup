#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct tocka2d{
	double x,y;
	
	double udaljenost(){
		return(x*x+y*y);
	}
	
};
#define N 10000000000

int main(){
	srand((unsigned)time(NULL));
	
	struct tocka2d tocka;
	int unutar=0;
	
	for(long int i=0;i<N;i++){
		tocka.x=1.0*rand()/RAND_MAX*2-1;
		tocka.y=1.0*rand()/RAND_MAX*2-1;
		if(tocka.udaljenost()<1) unutar++;
		if(i%(N/100) == 0) printf("Q");
	}
	printf("%.9f", 4.0*unutar/N);
}
