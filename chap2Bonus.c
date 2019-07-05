#include <stdio.h>

void helloWorldFun (int num){
	while (num>0){
		puts("Hello World!");
		num--;
	}
}

int main (int arc, char** argv){
	for (int i=0; i<5; i++){
		puts("Hello World !");
	}
	int j=0;
	while (j<5){
		puts("Hello World!");
		j++;
	}
	helloWorldFun(1);
	return 0;
}
