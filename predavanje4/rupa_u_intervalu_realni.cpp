#include<stdio.h>

#include<stdlib.h> // rand(), srand()
#include<time.h> //time()

int main(){
	srand((unsigned)time(NULL));
	
	//[2,10] \ [3,4] € R
	double randd;
	
	do{
		randd=(10-2)*(double)rand()/RAND_MAX+2;
	}while(randd>=3 && randd<=4);
	printf("%.3lf\n", randd);

	return 0;
}
