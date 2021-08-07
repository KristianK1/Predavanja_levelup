#include<stdio.h>
#include<math.h>
int main(){
	int polje[50];
	
	int a0=1;
	int q=2;
	polje[0]=a0;
	for(int i=1;i<50;i++){
		polje[i]=polje[i-1]*q;
		//polje[i]=a0*pow(q,i);
		printf("%d\n", polje[i]);
	}
	
	return 0;
}
