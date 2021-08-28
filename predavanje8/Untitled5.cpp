//Napisati definiciju funkcije koja odre.uje i vraca koliko je elemenata predanog joj
//cjelobrojnog polja manje od aritmeticke sredine svih elemenata. Funkcija mora moci raditi s
//poljima proizvoljne velicine.

int manjeodSredine(int *polje, int n){
	float sredina=0;
	for(int i=0;i<n;i++){
		sredina+=polje[i];
	}
	sredina/=n;
	
	int koliko=0;
	for(int i=0;i<n;i++){
		if(polje[i]<sredina) koliko++;
	}
	return koliko;
}
