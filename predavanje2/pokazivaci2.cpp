#include<stdio.h>
#include<stdlib.h>

int main(){
	int *p;
	p=(int*)malloc(10*sizeof(int));
	
	for(int i=0;i<10;i++){
		p[i]=i;
	}
	
	for(int i=0;i<10;i++){
		printf("%d ", *(p+i));
	}
	free(p);
	
	return 0;
}
