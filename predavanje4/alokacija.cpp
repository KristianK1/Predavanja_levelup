#include<stdio.h>
#include<stdlib.h>



int main(){
	//polje od 10 intova
	//unijeti polje
	//ispisati polje
	
	int *p=(int*) calloc(10,sizeof(int));
	if(p==NULL) return 0;
	
	for(int i=0;i<10;i++) scanf("%d", &p[i]);
	for(int i=0;i<10;i++) printf("%d ", p[i]);
	
	
	free(p); //obavezno
	return 0;
}
