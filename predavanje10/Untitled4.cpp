//racuna i vraca arit. sredinu poz. djelitelja danog cjelog broja

float fun(int broj){
	float sredina=0;
	int n=0;
	for(int i=1;i<=broj;i++){
		if(broj%i==0){
			sredina+=i;
			n++;
		}
	}
	
	return sredina/n;
}


