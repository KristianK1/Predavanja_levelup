#include<stdio.h>
int main(){
	char x='W';
	printf("%c\n", x);
	
	if(x>='A' && x<='Z'){
		x+=32;	
	}
	printf("%c\n", x);


	return 0;
}
