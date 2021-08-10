//ispuniti polje medusobno razlicitim pseudoslucajnim brojevima [-50,50] € Z
//polje od 20 elemenata
#include<stdio.h>
#include<stdlib.h> // rand(), srand()
#include<time.h> //time()

int main(){
	srand((unsigned)time(NULL));
	int p[20];
	for(int i=0;i<20;i++){  int duplic;
		do{
			duplic=0;
			p[i]=rand()%101-50;
			for(int j=0;j<i;j++){
				if(p[1]==p[0]){  //nova vrijednost == neka od prethodnih
					duplic=1;
				}
			}
			
		}while(duplic==1);
	}
	
	for(int i=0;i<20;i++) printf("%d\n", p[i]);

	return 0;	
}
