#include<stdio.h>

int main(){
	int n, j, i;
	for(i = 1; i <=5; i++){
		printf("\n");
			for(j = 0; j < i; j++){
				printf(" ");
					for(n = 0; n < i; n ++){
						printf("*");
					}
			}
	}
	
}
