#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand((unsigned)time(NULL));
	int n;
	scanf("%d", &n);
	int *p;
	p = (int*)calloc(n, sizeof(int));
	// [-10,20] € Z
	
	for(int i=0;i<n;i++){
		*(p+i)= rand()%(20 - (-10) +1) + (-10);
	}
	int max=p[0]; // 3 5 15 0 1 15 4 8 15 -5
	for(int i=0;i<n;i++){
		if(p[i]>=max){ //odabiremo zadnji najveci, da je < odabrali bi prvi najveci
			max=p[i];
		}
		
	}
	free(p);

	return 0;
}
