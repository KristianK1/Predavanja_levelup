#include<stdio.h>
void fun(int *q){
	*q=3;
}

int main(){

	int a=2;
	fun(&a);
	printf("%d", a);


	return 0;
}
