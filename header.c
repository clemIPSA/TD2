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
