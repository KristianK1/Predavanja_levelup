#include<stdio.h> //upis ispis

#include<stdlib.h> // rand(), srand()
#include<time.h> //time()
int main(){
	srand((unsigned)time(NULL));
	
	
	
	
	double randd= velicina_intervala * (double) rand()/RAND_MAX + donja_granica;
	
	
	
	return 0;
}
