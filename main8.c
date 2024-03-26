#include <stdio.h>
#include <time.h>
#include <unistd.h>
int main (){
	clock_t start, actuel;
	start =clock();
	double temps_ecoule;
	int cpt=0;
	while (cpt<10){
		actuel =clock();
		temps_ecoule =(double) (actuel - start)/1000 ;	
		printf("le temps ecoule est de %.2f secondes\n",temps_ecoule);
		cpt++;
		sleep(1);
	}
	return 0;
}
