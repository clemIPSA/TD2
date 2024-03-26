#include "header.h"
#include <stdio.h>

int compare (int a , int b){
	if (a>b){
		return a;
	}
	else{
		return b;
	}

}

void loop(int a){
	for (int i=0; i<a; i++){
		printf("%d",i);
		printf("\n");
	}
}


void loop2(int a){
	int i=0;
        while (i<a){
                printf("%d",i);
		i++;
                printf("\n");
        }
}


void aff(int a){
	printf("La valeur de la variable est %d",a);
	printf("\nL'adresse de la varriable est %p \n",&a);
}

void sum (){
	int a;
	int b;
	printf("Entrez la valeur de a : ");
	scanf("%d",&a);
	printf("\nEntrez la valeur de b : ");
        scanf("%d",&b);
	printf("\nResultat de a+b %d",a+b);
	printf("\n");



}


void value_list(int v){
	int a[14]={1,2,3,4,5,6,7,8,9,10,11,12,13,134};
	int q=0;
	for (int i=0;i<14;i++){
		if (v==a[i]){
			printf("la valeur est dans le tableau a la position %d\n",i);
			break;
		}
		else {
			q++;
		}
	}
	if (q==14){
		printf("la valeur n'est pas dans le tableau\n");
	}
}


void binary_search(int target){
	int a[14]={1,2,3,4,5,6,7,8,9,10,11,12,13,134};
	int gauche=0;
	int droite=14;

	while (gauche<droite){
		int milieu=(gauche+droite)/2+1;
		if (a[milieu]==target){
			printf("la valeur est dans le tableau a la position %d\n",milieu);
	                break;
		}
		if (a[milieu]<target){
			gauche = milieu+1;
		}
		else {
			droite = milieu -1;
		}
	}
}
















