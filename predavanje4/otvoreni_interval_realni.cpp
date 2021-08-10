#include<stdio.h>

#include<stdlib.h> // rand(), srand()
#include<time.h> //time()

int main(){
	srand((unsigned)time(NULL));
	// <3,10> € R
	double randd;
	do{
		randd=(10-3)*(double)rand()/RAND_MAX + 3; 
	}while(randd!=3 && randd!=10);
