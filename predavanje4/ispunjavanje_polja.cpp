//ispuniti polje od 30 intova s(...) interval [0,10]
#include<stdio.h>

#include<stdlib.h> // rand(), srand()
#include<time.h> //time()

int main(){
	srand((unsigned)time(NULL));
	
	
	
	int polje[30];
	for(int i=0;i<30;i++){
		polje[i]=rand()%(10+1);
		printf("%d\t", polje[i]);
	}
	
	
	
	
		
	
	return 0;
}
