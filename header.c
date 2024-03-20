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
