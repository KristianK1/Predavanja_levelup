int brojanje(char *str){
	int brojac=0;
	for(int i=0;str[i]!='\0';i++){
		if(str[i]>='0' && str[i]<='9'){
			brojac++;
		}
	}
	return brojac;
}
