#include<math.h>
float fun(int broj){
	float sredina=1;
	int n=0;
	broj=abs(broj);
	do{
		sredina*=broj%10;
		n++;
		broj/=10;	
	}while(broj!=0);
	
	return pow(sredina, (double)1/n);
}
