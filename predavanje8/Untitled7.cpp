#include<stdio.h>
#include<stdlib.h>
int main(){
	char *str2=(char*)malloc(100* sizeof(char));
	if(str2==NULL) return 0;
	fgets(str2, 100, stdin);
	
	
	for(int i=0;str2[i]!='\0';i++){
		if('A'<=str2[i] && str2[i]<='Z') str2[i]+=32;
	}
	
	
	fputs(str2, stdout);
	

	free(str2);
	return 0;
}
