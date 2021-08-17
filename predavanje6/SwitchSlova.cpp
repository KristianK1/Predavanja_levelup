#include<stdio.h>
int main(){
	char q[50];
	fgets(q,50,stdin);
	
	
	int brojac=0;
	for(int i=0;q[i]!='\0';i++){
		if(q[i]>='A' && q[i]<='Z') q[i]+=32;
		else if(q[i]>='a' && q[i]<='z') q[i]-=32;
	}

	fputs(q, stdout);


	return 0;
}
