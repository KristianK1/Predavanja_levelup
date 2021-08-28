#include<stdio.h>
#include<stdlib.h>
int main(){
	int intP[]={3,5,7,8,9,6,3};
	
	char str[]={'A','B','D','F','G','T','H','Z','\0'};


	for(int i=0;str[i]!='\0';i++){
		printf("%c", str[i]);	
	}
	
	
	char *str2=(char*)malloc(10* sizeof(char));
	if(str2==NULL) return 0;
	fgets(str2, 10, stdin);
	fputs(str2, stdout);
	

	free(str2);
	return 0;
}
