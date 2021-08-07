#include<stdio.h>




int main(){
	int a=3;
	
	//printf("%p : %d", &a , a);
	
	int *p;
	
	p=&a;
	
	scanf("%d", p);
	printf("%d", *p);
	
	
	
	
}
