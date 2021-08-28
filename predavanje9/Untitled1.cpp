#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int i,j,m;
    srand((unsigned)time(NULL));
    float a[30][30];

    do{
        scanf("%d",&m);
    }while(!(12<=m && m <=30 && m%2==0));

    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            a[i][j]=-m+(float)rand()/RAND_MAX*(m-(-m));
        }
    }
    float min=0;
    int indeks_min_i , indeks_min_j;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(a[i][j] < min){
                min = a[i][j];
                indeks_min_i = i;
                indeks_min_j = j;
            }
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            printf("%f\t",a[i][j]);
        }
        printf("\n");
    }
    printf("%f\n",min);


   	if(indeks_min_i<indeks_min_j){
    	printf("iznad glavne\n");
    	return 0;
    }
	else if(indeks_min_i>indeks_min_j){
    	printf("ispod glavne\n");
    	return 0;
	}

    if(indeks_min_i+indeks_min_j<m-1){
        printf("iznad sporedne\n");
    }else if(indeks_min_i+indeks_min_j>m-1){
        printf("ispod sporedne\n");
    }

    return 0;
}
