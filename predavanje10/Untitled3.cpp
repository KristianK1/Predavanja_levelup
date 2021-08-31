//ako ima vise parnih -> vraca 1
//ako ima vise neparnih -> vraca -1
//inace vraca 0

int funkcija(int *polje, int n){
	int parni=0;
	int neparni=0;
	for(int i=0;i<n;i++){
		if(polje[i]%2==0) parni++;
		if(polje[i]%2==1) neparni++;
	}
	
	if(parni>neparni) return 1;
	else if(neparni>parni) return -1;
	else return 0;
}
