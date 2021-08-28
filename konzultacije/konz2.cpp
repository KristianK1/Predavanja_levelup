#include<stdio.h>


int prost(int broj){
	//ako je broj prost vraca 1, ako nije vraca 0
	for(int i=2;i<broj;i++){
		if(broj%i==0){
			//znamo da je broj nije prost
			return 0;
		}
	}
	return 1;
}























int main(){
	int a=prost(7);
	printf("%d", a);
	return 0;
}





