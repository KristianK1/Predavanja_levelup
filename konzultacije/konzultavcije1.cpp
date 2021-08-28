#include<stdio.h>


int,int zbroj(int *polje, int n){
	int ret=0;
	
	for(int i=0;i<n;i++){
		ret+=polje[i];
	}
	
	return ret;
}


















int main(){

	int polje[]={1,2,3,4,5,6};
	
	// &polje[0]
	
	int rezultat;
	rezultat = zbroj(polje,6);

	printf("%d", rezultat);
	return 0;
}
