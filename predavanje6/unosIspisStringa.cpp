#include<stdio.h>
int main(){
	char Q[50];
	//scanf("%s", Q);
	//printf("%s", Q);

	fgets(Q, 50, stdin);
	fputs(Q, stdout);
	
	return 0;
}
