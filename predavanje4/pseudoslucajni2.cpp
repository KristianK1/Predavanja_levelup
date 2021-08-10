#include<stdio.h>

#include<stdlib.h> // rand(), srand()
#include<time.h> //time()

int main(){
	srand((unsigned)time(NULL));
	
	//generiraj broj u intervalu [-5,10] € R

	double randd=( (10 - (-5)) * (double) rand()/RAND_MAX ) + (-5);


	return 0;
}
