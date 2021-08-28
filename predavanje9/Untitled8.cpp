int BrRijeci(char *str){
	int brojac=1;
	
	for(int i=0;str[i!='\0';i++){
		if(str[i]==' ') brojac++;
	}
	
	return brojac;
}
