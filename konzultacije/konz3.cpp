#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int brojDj(int broj){ // 7        1,2,3,4,5,6,7
	broj=abs(broj); //bitna stvar
	int ukupno=0;
	for(int i=1;i<=broj;i++){
		if(broj%i==0) ukupno++;
	}
	return ukupno;
}

int funkcija(int *polje, int n){
	int min_dj=brojDj(polje[0]);
	int index_min=0;
	int i;
	
	for(i=0;i<n;i++){
		if(min_dj>brojDj(polje[i])){
			
			min_dj=brojDj(polje[i]);
			index_min=i;
		}
		
	
	}
	
	return polje[index_min];
}

#define dg -111
#define gg 110


int main(){
	srand((unsigned)time(NULL));
	int polje[250];
	// [-111,110] € Z

	for(int i=0;i<250;i++){
		polje[i]= rand()%(gg-dg+1)+dg;
		printf("%d ", polje[i]);
	}
	
	int rez = funkcija(polje, 250);
	
	printf("\n%d", rez);



	return 0;
}
