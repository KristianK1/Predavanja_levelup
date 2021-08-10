//ispuniti polje od 30 float-ova s(...) interval [0,10]
#include<stdio.h>

#include<stdlib.h> // rand(), srand()
#include<time.h> //time()

int main(){
	srand((unsigned)time(NULL));
	
	
	
	float polje[30];
	for(int i=0;i<30;i++){
		polje[i]=10*(float)rand()/RAND_MAX;
		printf("%.2f\t", polje[i]);
	}
	
	
	
	
		
	
	return 0;
}
