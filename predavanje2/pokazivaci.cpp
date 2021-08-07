#include<stdio.h>

int main(){
	
	int a=2;
	//scanf("%d", &a);
	
	int *p;
	
	p=&a;
	
	scanf("%d", p);
	printf("%d", *p);
	
	
	// p=&a
	// a == *p
	// &a == p  
	
	
	return 0;
}
