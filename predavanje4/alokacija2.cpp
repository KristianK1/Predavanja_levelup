#include<stdio.h>
#include<stdlib.h>
int* alokacija(int n);
void unos(int *p, int n);
int main(){
	int n=6;
	int *p=alokacija(n);
	unos(p,n);
	free(p);
	return 0;
}


int* alokacija(int n){
	int *p=(int*)malloc(n*sizeof(int));
	if(p==NULL) return NULL;
	return p;
}

void unos(int *p, int n){
	for(int i=0;i<n;i++){
		scanf("%d", &p[i]);
	}
}
