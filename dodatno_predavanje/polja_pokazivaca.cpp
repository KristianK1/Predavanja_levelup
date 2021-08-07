#include<stdio.h>
#include<stdlib.h>

int** alociraj(int red, int stupac){
	int **pok;
	pok = (int**) malloc( red * sizeof(int*));
	
	if(pok==NULL) return NULL;
	
	for(int i=0; i<red; i++){
		pok[i] = (int*) malloc(stupac*sizeof(int));
		if(pok[i]==NULL) return NULL;
		//printf("%p\n", pok[i]);
	}

	return pok;
}


void unesi(int **pok, int br_red, int br_stup){
	for(int i=0;i<br_red;i++){
		for(int j=0;j<br_stup;j++){
			scanf("%d", &pok[i][j]);
		}
	}
}

void ispisi(int **pok, int br_red, int br_stup){
	for(int i=0;i<br_red;i++){
		for(int j=0;j<br_stup;j++){
			printf("%d\t", pok[i][j]);
		}
		printf("\n");
	}
}

void izbrisi(int **pok, int red){
	for(int i=0;i<red;i++){
		free(pok[i]); //OBAVEZNO
		pok[i]=NULL; //nije obavezno
	}
	free(pok);
	pok=NULL;
}

int main(){
	int **pok;
	int br_red=3;
	int br_stup=4;
	
	pok = alociraj(br_red, br_stup);
	
	unesi(pok, br_red, br_stup);
	ispisi(pok, br_red, br_stup);
	
	izbrisi(pok, br_red);
	return 0;
}
