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
