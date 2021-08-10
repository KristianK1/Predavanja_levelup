#include<stdio.h>

#include<stdlib.h> // rand(), srand()
#include<time.h> //time()

int main(){
	srand((unsigned)time(NULL));
	//interval [0,3>  -->  [0,2]	
	int randd;
	
	randd=rand()%3;  //[0,3>
	rand=rand()%(2+1) // [0,2] 
	//linije isto generiraju
	
	
	return 0;
}
