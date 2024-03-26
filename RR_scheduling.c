#include <stdio.h>
#include <time.h>
#include <unistd.h>

void task1(){
	printf("task1\n");
}

void task2(){
        printf("task2\n");
}

void task3(){
        printf("task3\n");
}



int main (){
	int cpt=0;
	void (*list[3])()={task1,task2,task3};
	int a =0;
	while(cpt<10){
		if (a>=3){
			a=0;
		}
		(*list[a])();
		a++;
		sleep(1);
	}

}

