#include<stdio.h>
int main(){
	char polje[]={'A', 'B', 'C'};
	char string[]="ABC";
	
	printf("%d %d\n", sizeof(polje), sizeof(string));
	
	for(int i=0; string[i]!='\0' ;i++){
		printf("%c ", string[i]);
	}



	return 0;
}
