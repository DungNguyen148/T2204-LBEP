#include<stdio.h>

int main(){
	int n;
	printf("nhap chieu cao cua n: ");
	scanf("%d", &n);
	if(n>0){
		int i, j;
		for(i = 2; i >= 0; i--){
			for(j = 0; j < 5; j++){
			
				printf("*");
			}
			printf("\n");
		}
		
	}else{
		printf("Nhap vao so duong n!");
	}
}
