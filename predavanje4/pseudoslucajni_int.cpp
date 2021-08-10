#include<stdio.h>

#include<stdlib.h> // rand(), srand()
#include<time.h> //time()

int main(){
	srand((unsigned)time(NULL));
	//generirati slucajan cjeli broj u intervalu [0,7]
	int randd=rand()%(7+1);
	
	//generirati slucajan cjeli broj u intervalu [-3,3]  -- slicno kao [0,6]
	
	randd=rand()%(6+1)-3;
	
	int dg=-5;
	int gg=21;
	randd=rand()%(gg-dg+1)+dg;
	
	
	return 0;
}
