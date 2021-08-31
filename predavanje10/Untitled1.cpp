//unijeti string od maksimalno, 50 znakovaaaaa
//u funkciji odrediti koliko slova sadrži najdulja rijeè
#include<stdio.h>

int fun(char *str){
	int counter=0, max=0;
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==' ' || str[i]=='\n') counter=0;
		else{
			counter++;
			if(counter>max) max=counter;
		}
	}
	return max;
}



int main(){
	char str[51];
	fgets(str,51, stdin);
	printf("%d", fun(str));
	return 0;
}
