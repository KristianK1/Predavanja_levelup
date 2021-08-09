for(int j=0;j<5;j++){
	int max=matrica[0][j];
	
	for(int i=0;i<3;i++){
		if(matrica[i][j]>max){
			max=matrica[i][j];
		}	
	}
	printf("%d\n", max);
}
