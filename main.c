#include <stdio.h>
#include "header.h"

int main (){
	int a;
	int b;
	printf("Entrez la valeur de a : ");
	scanf("%d",&a);
	printf("\nEntrez la valeur de b : ");
        scanf("%d",&b);
	printf("\nLa valeur la plus grande entre a et b est :  %d",compare(a,b));
	printf("\n");
	return 0;
}
